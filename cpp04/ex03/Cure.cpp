#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria(CURE){ }
Cure::Cure(const Cure &obj) : AMateria(obj.getType()){ }
Cure::Cure(const STRING &type) : AMateria(type){ }
Cure &Cure::operator=(const Cure &obj){
	this->type = obj.getType();
	return *this;
}
Cure::~Cure(){ }
AMateria *Cure::clone() const{ return new Cure(); }
void Cure::use(const ICharacter &obj){ COUT << "* heals " << obj.getName() << "'s wounds *" << ENDL; }