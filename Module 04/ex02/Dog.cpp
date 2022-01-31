#include "Dog.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << YELLOW << "Def. Dog constructor called" << EOC << std::endl;
}

Dog::Dog(const Dog &src) {
	std::cout << BLUE << "Copy Dog constructor called" << EOC << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << RED << "Dog Destructor called" << EOC << std::endl;
	delete this->_brain;
}

Dog &Dog::operator= (const Dog &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src) {
		_type = src.getType();
		Brain *newBrain = new Brain();
		newBrain->setIdeas(src._brain->getIdeas());
		this->_brain = newBrain;
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << GREEN << "Wuf!" << EOC << std::endl;
}