#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "< WrongCat > Default consturctor" << std::endl;
}
WrongCat::WrongCat(const WrongAnimal &other) : WrongAnimal()
{
	this->type = other.getType();
	std::cout << "< WrongCat > Copy consturctor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongAnimal &other)
{
	this->type = other.getType();
	std::cout << "< WrongCat > Assigned" << std::endl;
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << "< WrongCat > Destructed" << std::endl;
}

void WrongCat::makeSound() const 
{
	std::cout << "Wrong Mewo" << std::endl;
}