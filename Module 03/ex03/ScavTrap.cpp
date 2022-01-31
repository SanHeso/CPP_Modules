#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "Default";
	this->_Hitpoints = 100;
	this->_Energy = 50;
	this->_Damage = 20;
	std::cout << "ScavTrap < " << BLUE << this->_name << EOC << " > Created!" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	this->_Hitpoints = 100;
	this->_Energy = 50;
	this->_Damage = 20;
	std::cout << "ScavTrap < " << BLUE << this->_name << EOC << " > Created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap < " << BLUE <<this->_name << EOC << " > Disable!" << std::endl;
}

ScavTrap & ScavTrap::operator= (const ScavTrap &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src) {
		_name = src._name;
		_Damage = src._Damage;
		_Energy = src._Energy;
		_Hitpoints = src._Hitpoints;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap < " << BLUE <<this->_name << EOC << " > attack < "
		<< BROWN << target << EOC << " >, causing < "
		<< RED << this->_Damage << EOC << " > points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	std::cout << "ScavTrap < " << BLUE << this->_name << EOC
		<< " > take < " << RED << amount << EOC << " > Damage!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "ScavTrap < " << BLUE <<this->_name << EOC
		<< " > recovered < " << GREEN << amount << EOC << " > Health!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "🛡 ScavTrap < " << RANDOM << this->_name << EOC << " > have entered in Gate keeper mode 🛡️\n" << std::endl;
}