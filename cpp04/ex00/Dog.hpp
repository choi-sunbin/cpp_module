#ifndef DOG_HPP
#define DOG_HPP

#define DOG	"Dog"

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Animal &obj);
	Dog &operator=(const Animal &obj);
	virtual ~Dog();
	void makeSound() const;
};

#endif
