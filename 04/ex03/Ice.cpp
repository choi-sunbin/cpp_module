#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria(ICE){ }
Ice::Ice(const Ice &obj) : AMateria(obj.getType()){ }
Ice::Ice(const STRING &type) : AMateria(type){ }
Ice &Ice::operator=(const Ice &obj){
	this->type = obj.getType();
	return *this;
}
Ice::~Ice(){ }
AMateria *Ice::clone() const{ return new Ice(); }
void Ice::use(const ICharacter &obj){ COUT << "* shoots an ice bolt at " << obj.getName() << " *" << ENDL; }