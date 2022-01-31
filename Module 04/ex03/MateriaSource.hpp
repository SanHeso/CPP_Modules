#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# define MATERIAL 4

class MateriaSource : public IMateriaSource {

private:
	AMateria	*_materias[MATERIAL];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource &operator=(const MateriaSource &src);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};

#endif