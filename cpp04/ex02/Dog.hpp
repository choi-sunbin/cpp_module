#ifndef DOG_HPP
#define DOG_HPP

#define DOG	"Dog"

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &obj);
	Dog &operator=(const Dog &obj);
	virtual ~Dog();
	void makeSound() const;
	const Brain *getBrain() const;
};

#endif
