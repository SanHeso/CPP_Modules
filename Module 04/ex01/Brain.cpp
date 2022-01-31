#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << YELLOW << "Def. Brain constructor called" << EOC << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << BLUE << "Copy Brain constructor called" << EOC << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << RED << "Brain Destructor called" << EOC << std::endl;
}

Brain &Brain::operator= (const Brain &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src)
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return (*this);
}

std::string *Brain::getIdeas() {
	return _ideas;
}

void Brain::setIdeas(std::string *_ideas) {
	for (int i = 0; i < 100; ++i) {
		this->_ideas[i] = _ideas[i];
	}
}