#include "Zombie.hpp"

Zombie::Zombie(void) : name("")
{
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->name << "> " << "Ah, s**t, here we go again." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::zomb_name(std::string zname) {
	if (zname.length() <= 0)
		return ;
	this->name = zname;
}