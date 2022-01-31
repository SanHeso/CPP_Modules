#include "Cat.hpp"

Cat::Cat(void) {
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << YELLOW << "Def. Cat constructor called" << EOC << std::endl;
}

Cat::Cat(const Cat &src) {
	std::cout << BLUE << "Copy Cat constructor called" << EOC << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << RED << "Cat Destructor called" << EOC << std::endl;
	delete this->_brain;
}

Cat &Cat::operator= (const Cat &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src) {
		_type = src.getType();
		Brain *newBrain = new Brain();
		newBrain->setIdeas(src._brain->getIdeas());
		this->_brain = newBrain;
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << GREEN << "Meow!" << EOC << std::endl;
}