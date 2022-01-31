#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ClapTrap	Tag("Tagir");
	ScavTrap	Peer("Peer");

	Tag.attack(Peer.getName());
	Peer.takeDamage(Tag.getDamage());
	Peer.guardGate();
	Peer.beRepaired(10);
}