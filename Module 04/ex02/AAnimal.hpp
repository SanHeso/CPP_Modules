#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# define RED "\033[1;38;2;255;0;0m"
# define GREEN "\033[1;38;2;0;200;0m"
# define BLUE "\033[1;38;2;0;0;255m"
# define BROWN "\033[1;38;2;200;60;60m"
# define RANDOM "\033[1;38;2;90;200;90m"
# define YELLOW "\033[1;33m"
# define EOC "\033[0m"

#include <iostream>

class AAnimal {

protected:
	std::string	_type;

public:
	AAnimal();
	// AAnimal(const AAnimal &src);
	// AAnimal &operator = (const AAnimal &src);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;
	std::string	getType() const;
};

#endif