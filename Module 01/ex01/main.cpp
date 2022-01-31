#include "Zombie.hpp"

int		main(void) {
	int		len(5);

	Zombie	*hooorde = zombieHorde(len, "L");
	for (int i = 0; i < len; i++) {
		hooorde[i].announce();
	}
	delete [] hooorde;
}