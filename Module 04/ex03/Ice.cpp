#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {};

Ice::Ice(const Ice &src) : AMateria("ice") {
	*this = src;
}

Ice::~Ice() {};

Ice &Ice::operator= (const Ice &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Ice *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}