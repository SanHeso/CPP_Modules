#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << YELLOW << "Def. WrongCat constructor called" << EOC << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
	std::cout << BLUE << "Copy WrongCat constructor called" << EOC << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << RED << "WrongCat Destructor called" << EOC << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src)
		_type = src.getType();
	return (*this);
}