#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type(WRONGANIMAL){ COUT << "< WRONGANIMAL > Default consturctor" << ENDL; }
WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type(obj.getType()){ COUT << "< WRONGANIMAL > Copy consturctor" << ENDL; }
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj){
	this->type = obj.getType();
	COUT << "< WRONGANIMAL > Assigned" << ENDL;
	return *this;
}
WrongAnimal::~WrongAnimal(){ COUT << "< WRONGANIMAL > Destructor" << ENDL; }
STRING WrongAnimal::getType() const{ return this->type; }
void WrongAnimal::makeSound() const{ COUT << "< WRONGANIMAL SOUND >" << ENDL; }
OSTREAM &operator<<(OSTREAM &output, const WrongAnimal &obj){ return output << obj.getType(); }