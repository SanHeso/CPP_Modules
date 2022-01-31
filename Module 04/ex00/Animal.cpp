#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << YELLOW << "Def. Animal constructor called" << EOC << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << BLUE << "Copy Animal constructor called" << EOC << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << RED << "Animal Destructor called" << EOC << std::endl;
}

Animal &Animal::operator= (const Animal &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src)
		_type = src.getType();
	return (*this);
}

std::string Animal::getType() const {
	return (_type);
}

void	Animal::makeSound() const {
	std::cout << GREEN << "being no one, going nowhere" << EOC << std::endl;
}