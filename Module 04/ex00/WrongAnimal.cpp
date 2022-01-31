#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << YELLOW << "Def. WrongAnimal constructor called" << EOC << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << BLUE << "Copy WrongAnimal constructor called" << EOC << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal Destructor called" << EOC << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src)
		_type = src.getType();
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void	WrongAnimal::makeSound() const {
	std::cout << GREEN << "Wrong: being no one, going nowhere" << EOC << std::endl;
}