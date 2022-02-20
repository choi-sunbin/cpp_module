#include "Cat.hpp"
#include "Dog.hpp"

void t(){
	const Animal *meta = new Cat();
	const Animal *i = new Dog();
	const Animal *j = new Dog();


	COUT << ENDL;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	COUT << ENDL;
	*(const_cast<Animal*>(j)) = *(const_cast<Animal*>(i));
	COUT << ENDL;
	delete meta;
	delete i;
	delete j;
}

void tt(){
	const Dog *dog = new Dog();
	const Cat *cat = new Cat();

	COUT << "\n ====DOGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG\n\n";
	COUT << *dog->getBrain();
	COUT << "\n ====CATTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT\n\n";
	COUT << *cat->getBrain();

	COUT << "\n\n";
	delete dog;
	delete cat;

}

int main(){
	t();
	COUT << "\n\n=================================================\n\n";
	tt();
}