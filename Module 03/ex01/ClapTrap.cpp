#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _Hitpoints(10), _Energy(10), _Damage(0) {}

ClapTrap::ClapTrap(std::string const name) : _name(name), _Hitpoints(10), _Energy(10), _Damage(0) {
	std::cout << "ClapTrap < " << BLUE <<this->_name << EOC << " > Created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap < " << BLUE <<this->_name << EOC << " > Disable!" << std::endl;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src) {
		_name = src._name;
		_Damage = src._Damage;
		_Energy = src._Energy;
		_Hitpoints = src._Hitpoints;
	}
	return (*this);
}

void	ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap < " << BLUE <<this->_name << EOC << " > attack < "
		<< BROWN << target << EOC << " >, causing < "
		<< RED << this->_Damage << EOC << " > points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	std::cout << "ClapTrap < " << BLUE << this->_name << EOC
		<< " > take < " << RED << amount << EOC << " > Damage!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "ClapTrap < " << BLUE <<this->_name << EOC
		<< " > recovered < " << GREEN << amount << EOC << " > Health!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

const std::string &ClapTrap::getName() const {
	return (_name);
}

unsigned int ClapTrap::getHitpoints() const {
	return (_Hitpoints);
}

unsigned int ClapTrap::getEnergy() const {
	return (_Energy);
}

unsigned int ClapTrap::getDamage() const {
	return (_Damage);
}