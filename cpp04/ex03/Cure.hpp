#include "AMateria.hpp"

#define CURE "cure"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &obj);
	Cure(const STRING &type);
	Cure &operator=(const Cure &obj);
	virtual~Cure();

	AMateria *clone() const;
	void use(const ICharacter &obj);
};