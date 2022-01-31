#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal") {
	std::cout << YELLOW << "Def. AAnimal constructor called" << EOC << std::endl;
}

// AAnimal::AAnimal(const AAnimal &src) {
// 	std::cout << BLUE << "Copy AAnimal constructor called" << EOC << std::endl;
// 	*this = src;
// }

AAnimal::~AAnimal() {
	std::cout << RED << "AAnimal Destructor called" << EOC << std::endl;
}

// AAnimal &AAnimal::operator= (const AAnimal &src) {
// 	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
// 	if (this != &src)
// 		_type = src.getType();
// 	return (*this);
// }

std::string AAnimal::getType() const {
	return (_type);
}

void	AAnimal::makeSound() const {
	std::cout << GREEN << "being no one, going nowhere" << EOC << std::endl;
}