#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB(void) {
	std::cout << this->name << " Death" << std::endl;
}

void	HumanB::attack(void) const {
	if (this->weapon != NULL)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " Cannot attack: has no weapon " << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	if (newWeapon.getType() == "")
		return ;
	this->weapon = &newWeapon;
}