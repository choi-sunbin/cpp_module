#include "Dog.hpp"

Dog::Dog() : Animal(), brain(NULL){
	this->type = DOG;
	brain = new Brain();
	COUT << "< DOG > Default consturctor" << ENDL;
}
Dog::Dog(const Dog &obj) : Animal(), brain(NULL){
	this->type = obj.getType();
	this->brain = new Brain(*obj.getBrain());
	COUT << "< DOG > Copy consturctor" << ENDL;
}
Dog &Dog::operator=(const Dog &obj){
	this->type = obj.getType();
	*this->brain = *obj.getBrain();
	COUT << "< DOG > Copy Assigned" << ENDL;
	return *this;
}
Dog::~Dog(){ COUT << "< DOG > Copy Destructed" << ENDL; }
void Dog::makeSound() const { COUT << "< DOG > BowBow" << ENDL; }
const Brain *Dog::getBrain() const { return this->brain; }