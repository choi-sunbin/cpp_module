#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource(){}

	virtual void learnMateria(AMateria *obj) = 0;
	virtual AMateria *createMateria(const STRING &type) = 0;
};

#endif