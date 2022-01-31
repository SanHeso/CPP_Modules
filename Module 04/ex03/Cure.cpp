#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {};

Cure::Cure(const Cure &src) : AMateria("cure") {
	*this = src;
}

Cure::~Cure() {};

Cure &Cure::operator= (const Cure &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cure *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}