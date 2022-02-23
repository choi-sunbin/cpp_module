#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

void test_case1(){
	const Animal *meta = new Cat();
	const Animal *i = new Dog();
	const Animal *j = new Dog();

	std::cout << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	
	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
}

void test_case2(){
	int loop;
	const Dog *dog = new Dog();
	const Dog ddog(*dog);

	const Cat *cat = new Cat();
	
	std::cout << "\n ----------- PRINT DOG -----------\n";
	loop = 0;
	while (loop < 100)
	{
		std::cout << "[" << dog->getBrain()->getIdea(loop) << "]";
		std::cout << "[" << ddog.getBrain()->getIdea(loop) << "]";
		std::cout << std::endl;
		loop++;	
	}
	std::cout << "\n ----------- PRINT CAT -----------\n";
	loop = 0;
	while (loop < 100)
	{
		std::cout << cat->getBrain()->getIdea(loop);
		loop++;	
	}
	std::cout << "\n----------- FIN -----------\n";
	delete dog;
	delete cat;
}

int main(){
	test_case1();
	std::cout << "\n\n=================================================\n\n";
	test_case2();
	system("leaks a.out");
}