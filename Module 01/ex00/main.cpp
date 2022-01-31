#include "Zombie.hpp"

int		main(void) {
	// Основной способ создания зомби через объект класса
	std::cout << "Первый зомби по имени Майк" << std::endl;
	Zombie Mike("Майк");
	Mike.announce();

	// Cоздание зомби через функцию newZombie();
	std::cout << "\nВторой зомби по имени Нурсултан" << std::endl;
	Zombie *Nursultan = newZombie("Nursultan");
	Nursultan->announce();

	delete Nursultan;

	// Cоздание зомби через функцию randomChamp();
	std::cout << "\nТретий зомби по имени Галина" << std::endl;
	randomChump("Галина");

	return 0;
}