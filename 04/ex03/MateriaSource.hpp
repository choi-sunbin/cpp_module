#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *a[SZ];
public:
	MateriaSource();
	MateriaSource(const MateriaSource *obj);
	MateriaSource &operator=(const MateriaSource &obj);
	virtual ~MateriaSource();

	void learnMateria(AMateria *obj);
	AMateria *createMateria(const STRING &type);
};

#endif