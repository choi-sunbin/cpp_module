#include "Cat.hpp"
#include "Dog.hpp"
#include <stdlib.h>

void t(){
	const Animal *meta = new Cat();
	const Animal *i = new Dog();
	const Animal *j = new Dog();

	std::cout << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	*(const_cast<Animal*>(j)) = *(const_cast<Animal*>(i));
	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
}

void tt(){
	int loop;
	const Dog *dog = new Dog();
	const Cat *cat = new Cat();

	std::cout << "\n ----------- PRINT DOG -----------\n";
	loop = 0;
	while (loop < 100)
	{
		std::cout << dog->getBrain()->getIdea(loop);
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
int main()
{
	{
		Animal *Animals[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		std::cout << "DEEP COPY!!" << std::endl;
		std::cout << "-----------------------------" << std::endl;
		Dog copy(*(Dog *)Animals[4]);
		for (int i = 0; i < 100; ++i)
		{
			std::cout << copy.getBrain()->getIdea(i) << "    ";
			std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << "-----------------------------"
				  << std::endl;
		for (int i = 0; i < 10; ++i)
		{
			delete Animals[i];
		}
	}
	system("leaks a.out");
}