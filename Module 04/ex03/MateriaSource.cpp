#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < MATERIAL; ++i)
		this->_materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MATERIAL; ++i) {
		if (this->_materias[i] != 0) {
			delete this->_materias[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for (int i = 0; i < MATERIAL; ++i) {
			if (this->_materias[i] != 0) {
				delete this->_materias[i];
			}
			this->_materias[i] = src._materias[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < MATERIAL; ++i) {
		if (this->_materias[i] == 0) {
			this->_materias[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
for (int i = 0; i < MATERIAL; ++i) {
		if (this->_materias[i] && this->_materias[i]->getType() == type) {
			return (this->_materias[i]);
		}
	}
	return 0;
}