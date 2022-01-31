#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	AAnimal	*arrayAnimals[4];

	for (int i = 0; i < 4; ++i)
	{
		if (i < 2)
			arrayAnimals[i] = new Dog();
		else
			arrayAnimals[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 4; ++i) {
		delete arrayAnimals[i];
	}
}