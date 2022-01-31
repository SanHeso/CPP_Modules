#pragma once
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(void);
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &src);
	ScavTrap & operator= (ScavTrap const &src);

	~ScavTrap(void);

	virtual void attack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void guardGate();
};