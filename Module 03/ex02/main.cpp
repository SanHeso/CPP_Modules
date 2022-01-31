#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	ClapTrap	tag("Tagir");
	ScavTrap	peer("Peer");
	FragTrap	New("Hnewman");
	tag.takeDamage(20);
	tag.attack(peer.getName());
	peer.takeDamage(tag.getDamage());
	peer.guardGate();
	peer.beRepaired(10);
	peer.attack(New.getName());
	New.takeDamage(peer.getDamage());
	New.highFivesGuys();
	New.beRepaired(peer.getDamage());
}