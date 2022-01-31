#include "span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span &src) : _cont(src._cont), _size(src._size) {
	*this = src;
}

Span &Span::operator=(const Span &src) {
	if (this != &src) {
		this->_cont.assign(src._cont.begin(), src._cont.end());
		this->_size = src._size;
	}
	return (*this);
}

Span::SpanException::SpanException(std::string err_messages) : std::exception(), _err_message(err_messages) {}

Span::SpanException::~SpanException() throw() {}

const char *Span::SpanException::what() const throw() {
	return _err_message.c_str();
}

void Span::addNumber(int num) {
	if (_size - _cont.size() > 0) {
		_cont.push_back(num);
		std::sort(_cont.begin(), _cont.end());
	}
	else
		throw Span::SpanException("Container is overflow!");
}

void Span::addNumber(int left, int right) {
	if (static_cast<unsigned long>(right - left + 1) > _size - _cont.size())
		throw Span::SpanException("Conteiner is overflow!");
	for (int i = left; i <= right; ++i)
		_cont.push_back(i);
	std::sort(_cont.begin(), _cont.end());
}

void Span::addNumber(std::vector<int>::iterator left, std::vector<int>::iterator right) {
	if (static_cast<unsigned long>(right - left) > _size - _cont.size())
		throw Span::SpanException("Conteiner is overflow!");
	_cont.insert(_cont.end(), left, right);
	std::sort(_cont.begin(), _cont.end());
}

int Span::shortestSpan() {
	if (_cont.size() == 0 && _cont.size() == 1)
		throw Span::SpanException("Impossible to find span!");
	int	min = INT_MAX;
	for (std::vector<int>::iterator i = _cont.begin() + 1; i < _cont.end(); ++i) {
		if (*i - *(i - 1) < min)
			min = *i - *(i - 1);
	}
	return min;
}

int Span::longestSpan() {
	if (_cont.size() == 0 && _cont.size() == 1)
		throw Span::SpanException("Impossible to find span!");
	return (*(_cont.end() - 1) - *_cont.begin());
}
