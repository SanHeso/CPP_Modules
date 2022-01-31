#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define RED "\033[1;38;2;255;0;0m"
# define GREEN "\033[1;38;2;0;200;0m"
# define BLUE "\033[1;38;2;0;0;255m"
# define BROWN "\033[1;38;2;200;60;60m"
# define RANDOM "\033[1;38;2;90;200;90m"
# define EOC "\033[0m"

#include <iostream>

class ClapTrap {

private:
	std::string	_name;
	int			_Hitpoints;
	int			_Energy;
	int			_Damage;

public:
	ClapTrap(void);
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &src);
	ClapTrap & operator= (ClapTrap const & src);
	~ClapTrap(void);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string &getName() const;
	unsigned int getHitpoints() const;
	unsigned int getEnergy() const;
	unsigned int getDamage() const;

};

#endif