#include "AMateria.hpp"

AMateria::AMateria() : type("") {};

AMateria::AMateria(std::string const &type) : type(type) {};

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria() {};

AMateria &AMateria::operator= (const AMateria &src) {
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->type);
}
