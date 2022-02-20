#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#define WRONGCAT	"WrongCat"

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongAnimal &obj);
	WrongCat &operator=(const WrongAnimal &obj);
	virtual~WrongCat();
	void makeSound() const;
};

#endif
