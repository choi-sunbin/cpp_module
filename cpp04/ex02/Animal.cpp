#include "Animal.hpp"

Animal::Animal() : type(ANIMAL){ COUT << "< ANIMAL > Default consturctor" << ENDL; }
Animal::Animal(const Animal &obj) : type(obj.getType()){ COUT << "< ANIMAL > Copy consturctor" << ENDL; }
Animal &Animal::operator=(const Animal &obj){
	this->type = obj.getType();
	COUT << "< ANIMAL > Assigned" << ENDL;
	return *this;
}
Animal::~Animal() { COUT << "< ANIMAL > Destructor" << ENDL; }
STRING Animal::getType() const{ return this->type; }
OSTREAM &operator<<(OSTREAM &output, const Animal &obj){ return output << obj.getType(); }