#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	STRING name;
	AMateria *a[SZ];
public:
	Character();
	Character(const STRING &name);
	Character(const Character &obj);
	Character &operator=(const Character &obj);
	virtual ~Character();

	const STRING &getName() const;
	void equip(AMateria *obj);
	void unequip(int idx);
	void use(int idx, ICharacter &obj);
};


#endif