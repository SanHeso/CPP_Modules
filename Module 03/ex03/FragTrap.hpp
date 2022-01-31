#pragma once
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:
	FragTrap(void);
	FragTrap(std::string const &name);
	FragTrap(ScavTrap const &src);
	FragTrap & operator= (FragTrap const &src);

	~FragTrap(void);

	virtual void attack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};