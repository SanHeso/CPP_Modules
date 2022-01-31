#include "Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const Convert &src) {
	*this = src;
}

Convert &Convert::operator=(const Convert &src) {
	if (this != &src) {
		this->_str = src._str;
		this->_num = src._num;
	}
	return *this;
}

void	Convert::parser() {
	int		_sign = 1;
	bool	_point = false;

	if (_str.empty()) {
		throw std::string("Empty argument!");
	}
	if (_str.length() > 1) {
		int	i;
		for (i = 0; std::string("\t\v\f\r\n ").find(_str[i], 0) != std::string::npos; ++i) {}
		if (i == _str.length())
			throw std::string("Empty argument!");
		_str = _str.substr(i);
		if (_str == "nan" || _str == "nanf") {
			_num = NAN;
			return ;
		}
		if (_str[i] == '-' || _str[i] == '+') {
			if (!(std::isdigit(static_cast<unsigned char>(_str[i + 1]))))
				throw std::string("Is not digit!");
			if (_str[i] == '-')
				_sign = -1;
			++i;
		}
		_str = _str.substr(i);
		if (_str == "inf" || _str == "inff") {
			_num = INFINITY * _sign;
			return ;
		}
		if (_str.length() > 1) {
			for (i = 0; i < _str.length(); ++i) {
				if (_str[i] == '.') {
					if (_point == true || i == _str.length() - 1)
						throw std::string("Is not digit!");
					_point = true;
				}
				else if (!(std::isdigit(static_cast<unsigned char>(_str[i]))))
					break ;
			}
			if (i != _str.length()) {
				if (!(i + 1 == _str.length() && _str[i] == 'f' && _point == true))
					throw std::string("Is not digit!");
			}
			_num = atof(_str.c_str()) * _sign;
		}
	}
	if (_str.length() == 1) {
		if (_str[0] >= '0' && _str[0] <= '9')
			_str[0] -= '0';
		_num = static_cast<double>(_str[0]) * _sign;
	}
}

void	Convert::toChar() {
	char	c;

	if (std::isnan(_num)) {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (_num == INFINITY || _num == -INFINITY) {
		std::cout << "char: " << _num << std::endl;
		return ;
	}
	if (_num < CHAR_MAX && _num > CHAR_MIN) {
		c = static_cast<char>(_num);
		if (std::isgraph(static_cast<unsigned char>(c))) {
			std::cout << "char: " << c << std::endl;
		}
		else {
			std::cout << "char: Non Displayable" << std::endl;
		}
	}
	else
		std::cout << "char: Non Displayable" << std::endl;
}

void	Convert::toFloat() {
	float	f;
	int		accuracy = 1;

	f = static_cast<float>(_num);
	if (_str.find(".") != std::string::npos && _str.length() - _str.find(".") - 1 > 0)
		accuracy = _str.length() - _str.find(".") - 1;
	if (_str[_str.length() - 1] == 'f')
		accuracy--;
	std::cout << std::fixed << std::setprecision(accuracy) << "float: " << f << "f" << std::endl;
}

void	Convert::toDouble() {
	int		accuracy = 1;

	if (_str.find(".") != std::string::npos && _str.length() - _str.find(".") - 1 > 0)
		accuracy = _str.length() - _str.find(".") - 1;
	if (_str[_str.length() - 1] == 'f')
		accuracy--;
	std::cout << std::fixed << std::setprecision(accuracy) << "double: " << _num << std::endl;
}

void	Convert::toInt() {
	if (_num == INFINITY || _num == -INFINITY) {
		std::cout << "int: " << _num << std::endl;
		return ;
	}
	if (_num < static_cast<double>(INT32_MAX) && _num > INT32_MIN)
		std::cout << "int: " << static_cast<int>(_num) << std::endl;
	else
		std::cout << "int: Impossible" << std::endl;
}

void	Convert::print(std::string argv) {
	_str = argv;
	parser();
	toChar();
	toInt();
	toFloat();
	toDouble();
}