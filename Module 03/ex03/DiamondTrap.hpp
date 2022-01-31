#pragma once
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:
	std::string	_name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap & operator= (DiamondTrap const &src);

	~DiamondTrap(void);

	virtual void attack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void whoAmI(void) const;
};