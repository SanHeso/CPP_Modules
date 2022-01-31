#include "WrongDog.hpp"

WrongDog::WrongDog(void) {
	this->_type = "WrongDog";
	std::cout << YELLOW << "Def. WrongDog constructor called" << EOC << std::endl;
}

WrongDog::WrongDog(const WrongDog &src) {
	std::cout << BLUE << "Copy WrongDog constructor called" << EOC << std::endl;
	*this = src;
}

WrongDog::~WrongDog() {
	std::cout << RED << "WrongDog Destructor called" << EOC << std::endl;
}

WrongDog &WrongDog::operator= (const WrongDog &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src)
		_type = src.getType();
	return (*this);
}
