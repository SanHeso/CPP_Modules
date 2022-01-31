#ifndef CONVERT_HPP
# define CONVERT_HPP
# define FLICK "\033[1;5m"
# define EOC "\033[0m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

# include <iostream>
# include <cmath>
# include <iomanip>
# include <string>
# include <exception>

class Convert {

private:
	std::string	_str;
	double		_num;

	void	parser();
	void	toInt();
	void	toChar();
	void	toFloat();
	void	toDouble();

public:
	Convert();
	~Convert();
	Convert(const Convert &src);
	Convert &operator=(const Convert &src);

	void print(std::string str);
};

#endif
