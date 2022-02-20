#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	this->type = WRONGCAT;
	COUT << "< WrongCat > Default consturctor" << ENDL;
}
WrongCat::WrongCat(const WrongAnimal &obj) : WrongAnimal(){
	this->type = obj.getType();
	COUT << "< WrongCat > Copy consturctor" << ENDL;
}
WrongCat &WrongCat::operator=(const WrongAnimal &obj){
	this->type = obj.getType();
	COUT << "< WrongCat > Copy Assigned" << ENDL;
	return *this;
}
WrongCat::~WrongCat(){ COUT << "< WrongCat > Copy Destructed" << ENDL; }
void WrongCat::makeSound() const { COUT << "Wrong Mewo" << ENDL; }