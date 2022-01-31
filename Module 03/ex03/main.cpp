#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
	ClapTrap	tag("Tagir");
	ScavTrap	peer("Peer");
	FragTrap	Hnew("Hnewman");
	DiamondTrap	alu("Alumnus");

	tag.takeDamage(20);
	tag.attack(peer.getName());
	peer.takeDamage(tag.getDamage());
	peer.guardGate();
	peer.beRepaired(10);
	peer.attack(Hnew.getName());
	Hnew.takeDamage(peer.getDamage());
	Hnew.highFivesGuys();
	Hnew.attack(alu.getName());
	alu.takeDamage(Hnew.getDamage());
	alu.whoAmI();
	alu.beRepaired(10);
	alu.attack(Hnew.getName());
}