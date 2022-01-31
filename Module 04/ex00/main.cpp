#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << "********************************";
	std::cout << std::endl;
	std::cout << std::endl;
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* WrongJ = new WrongDog();
	const WrongAnimal* WrongI = new WrongCat();
	std::cout << WrongJ->getType() << " " << std::endl;
	std::cout << WrongI->getType() << " " << std::endl;
	WrongJ->makeSound();
	WrongI->makeSound();
	WrongMeta->makeSound();
	std::cout << std::endl;
	delete WrongMeta;
	delete WrongJ;
	delete WrongI;
}