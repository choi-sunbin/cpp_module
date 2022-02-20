#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->type = DOG;
	COUT << "< DOG > Default consturctor" << ENDL;
}
Dog::Dog(const Animal &obj) : Animal(){
	this->type = obj.getType();
	COUT << "< DOG > Copy consturctor" << ENDL;
}
Dog &Dog::operator=(const Animal &obj){
	this->type = obj.getType();
	COUT << "< DOG > Copy Assigned" << ENDL;
	return *this;
}
Dog::~Dog(){ COUT << "< DOG > Copy Destructed" << ENDL; }
void Dog::makeSound() const { COUT << "< DOG > BowBow" << ENDL; }