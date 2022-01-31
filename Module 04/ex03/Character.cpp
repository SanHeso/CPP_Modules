#include "Character.hpp"

Character::Character() {};

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < MATERIAL; ++i)
		this->_materias[i] = 0;
}

Character::~Character() {};

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < MATERIAL; ++i) {
		if (this->_materias[i] == 0) {
			this->_materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if ((idx >= 0 && idx < MATERIAL) && this->_materias[idx] != 0) {
		this->_materias[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target) {
	if ((idx >= 0 && idx < MATERIAL) && this->_materias[idx] != 0) {
		this->_materias[idx]->use(target);
	}
}
