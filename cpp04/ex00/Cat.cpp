#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->type = CAT;
	COUT << "< CAT > Default consturctor" << ENDL;
}
Cat::Cat(const Animal &obj) : Animal(){
	this->type = obj.getType();
	COUT << "< CAT > Copy consturctor" << ENDL;
}
Cat &Cat::operator=(const Animal &obj){
	this->type = obj.getType();
	COUT << "< CAT > Copy Assigned" << ENDL;
	return *this;
}
Cat::~Cat(){ COUT << "< CAT > Copy Destructed" << ENDL; }
void Cat::makeSound() const { COUT << "< CAT > Mewo" << ENDL; }