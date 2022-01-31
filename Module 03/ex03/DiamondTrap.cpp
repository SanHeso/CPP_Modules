#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "Default";
	std::cout << "DiamondTrap < " << BLUE << this->_name << EOC << " > Created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"),
	FragTrap(name), ScavTrap(name), _name(name) {
	std::cout << "DiamondTrap < " << BLUE << this->_name << EOC << " > Created!\n" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\nDiamondTrap < " << BLUE <<this->_name << EOC << " > Disable!" << std::endl;
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src) {
		_name = src._name;
		_Damage = src._Damage;
		_Energy = src._Energy;
		_Hitpoints = src._Hitpoints;
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const &target) {
	std::cout << "DiamondTrap < " << BLUE <<this->_name << EOC << " > attack < "
		<< BROWN << target << EOC << " >, causing < "
		<< RED << this->_Damage << EOC << " > points of damage!" << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	std::cout << "DiamondTrap < " << BLUE << this->_name << EOC
		<< " > take < " << RED << amount << EOC << " > Damage!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "DiamondTrap < " << BLUE <<this->_name << EOC
		<< " > recovered < " << GREEN << amount << EOC << " > Health!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "DiamondTrap < " << BLUE << this->_name << EOC <<
		" > ClapTrap < " << GREEN << ClapTrap::_name << EOC << " >" << std::endl;
}