#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon(void) {}

const std::string&	Weapon::getType() const {
	return (this->type);
}

void Weapon::setType(const std::string& newType) {
	if (newType.length() <= 0)
		return ;
	this->type = newType;
}
