#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->name << "> " << "Ah, s**t, here we go again." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}