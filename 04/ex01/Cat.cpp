#include "Cat.hpp"

Cat::Cat() : Animal(), brain(NULL){
	this->type = CAT;
	brain = new Brain();
	COUT << "< CAT > Default consturctor" << ENDL;
}
Cat::Cat(const Cat &obj) : Animal(), brain(NULL){
	this->type = obj.getType();
	this->brain = new Brain(*obj.getBrain());
	COUT << "< CAT > Copy consturctor" << ENDL;
}
Cat &Cat::operator=(const Cat &obj){
	this->type = obj.getType();
	*this->brain = *obj.getBrain();
	COUT << "< CAT > Copy Assigned" << ENDL;
	return *this;
}
Cat::~Cat(){ COUT << "< CAT > Destructed" << ENDL; }
void Cat::makeSound() const { COUT << "< CAT > Mewo" << ENDL; }
const Brain *Cat::getBrain() const { return this->brain; }