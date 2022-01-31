#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# define MATERIAL 4

class Character : public ICharacter {

private:
	std::string	_name;
	AMateria	*_materias[MATERIAL];

public:
	Character();
	Character(std::string name);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
