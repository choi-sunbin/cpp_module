#include "AMateria.hpp"

#define ICE "ice"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &obj);
	Ice(const STRING &type);
	Ice &operator=(const Ice &obj);
	virtual~Ice();

	AMateria *clone() const;
	void use(const ICharacter &obj);
};