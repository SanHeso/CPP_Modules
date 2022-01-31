#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "Default";
	this->_Hitpoints = 100;
	// this->_Energy = 100;
	this->_Damage = 30;
	std::cout << "FragTrap < " << BLUE << this->_name << EOC << " > Created!" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	this->_Hitpoints = 100;
	this->_Energy = 50;
	this->_Damage = 20;
	std::cout << "FragTrap < " << BLUE << this->_name << EOC << " > Created!" << std::endl;
}

FragTrap::FragTrap(ScavTrap const &src) {
	std::cout << BLUE << "Copy constructor called" << EOC << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap < " << BLUE <<this->_name << EOC << " > Disable!" << std::endl;
}

FragTrap & FragTrap::operator= (const FragTrap &src) {
	std::cout << RANDOM << "Assignation operator called" << EOC << std::endl;
	if (this != &src) {
		_name = src._name;
		_Damage = src._Damage;
		_Energy = src._Energy;
		_Hitpoints = src._Hitpoints;
	}
	return (*this);
}

void	FragTrap::attack(std::string const &target) {
	std::cout << "FragTrap < " << BLUE <<this->_name << EOC << " > attack < "
		<< BROWN << target << EOC << " >, causing < "
		<< RED << this->_Damage << EOC << " > points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	this->_Hitpoints -= amount;
	std::cout << "FragTrap < " << BLUE << this->_name << EOC
		<< " > take < " << RED << amount << EOC << " > Damage!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	this->_Hitpoints += amount;
	std::cout << "FragTrap < " << BLUE <<this->_name << EOC
		<< " > recovered < " << GREEN << amount << EOC << " > Health!";
	std::cout << " He has < " << GREEN << this->_Hitpoints << EOC << " > hp last" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << GREEN << "ULTRA " << EOC << BROWN << "MEGA " << EOC
		<< BLUE << "SUPER " << EOC << RED << "DUPER " << EOC
		<< RANDOM << "HIGH FIVE\n" << EOC << std::endl;
}