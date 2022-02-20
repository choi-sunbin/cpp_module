#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define ENDL	std::endl
#define COUT	std::cout
#define STRING	std::string
#define OSTREAM	std::ostream

#define ANIMAL	"Animal"

#include <iostream>
#include <string>

class Animal
{
protected:
	STRING type;
public:
	Animal();
	Animal(const Animal &obj);
	Animal &operator=(const Animal &obj);
	virtual ~Animal();

	STRING getType() const;
	virtual void makeSound() const = 0;
};

OSTREAM &operator<<(OSTREAM &output, const Animal &obj);

#endif
