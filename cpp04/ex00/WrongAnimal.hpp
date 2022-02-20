#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define ENDL	std::endl
#define COUT	std::cout
#define STRING	std::string
#define OSTREAM	std::ostream

#define WRONGANIMAL	"WrongAnimal"

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	STRING type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal &operator=(const WrongAnimal &obj);
	virtual~WrongAnimal();

	STRING getType() const;
	void makeSound() const;
};

OSTREAM &operator<<(OSTREAM &output, const WrongAnimal &obj);

#endif
