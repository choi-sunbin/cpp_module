#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type(""){ }
AMateria::AMateria(const AMateria &obj) : type(obj.getType()){ }
AMateria::AMateria(const STRING &type) : type(type){ }
AMateria &AMateria::operator=(const AMateria &obj){
	this->type = obj.getType();
	return *this;
}
AMateria::~AMateria(){ }
const STRING &AMateria::getType() const{ return this->type; }
void AMateria::use(const ICharacter &obj){ COUT << obj.getName() << ENDL; }