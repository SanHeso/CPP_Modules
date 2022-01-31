#include "ClapTrap.hpp"

int main(void) {
	ClapTrap Tag = ClapTrap("Tagir");
	ClapTrap Peer = ClapTrap("Peer");

	Tag.attack("Peer");
	Peer.takeDamage(Tag.getDamage());
	Peer.beRepaired(3);
}