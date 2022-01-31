#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class ICharacter;

class AMateria {

protected:
	std::string	type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &src);
	AMateria &operator = (const AMateria &src);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

# include "ICharacter.hpp"

#endif
