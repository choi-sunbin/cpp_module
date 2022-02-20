#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void t(){
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	COUT << ENDL;
	COUT << meta->getType() << ENDL;
	COUT << j->getType() << ENDL;
	COUT << i->getType() << ENDL;

	COUT << ENDL ;
	meta->makeSound(); 
	i->makeSound();
	j->makeSound();
	COUT << ENDL ;

	COUT << *meta << ENDL;
	COUT << *i << ENDL;
	COUT << *j << ENDL;
	COUT << ENDL;

	delete meta;
	delete i;
	delete j;
}

void tt(){
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *i = new WrongCat();

	COUT << ENDL;
	COUT << meta->getType() << ENDL;
	COUT << i->getType() << ENDL;

	COUT << ENDL;
	meta->makeSound(); 
	i->makeSound();
	COUT << ENDL;

	COUT << *meta << ENDL;
	COUT << *i << ENDL;
	COUT << ENDL;

	delete meta;
	delete i;
}

int main(){
	t();
	COUT << ENDL << "=======================================" << ENDL << ENDL;
	tt();
}