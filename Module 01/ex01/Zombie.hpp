#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	zomb_name(std::string zname);

private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif