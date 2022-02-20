#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongAnimal &other);
	WrongCat &operator=(const WrongAnimal &other);
	virtual ~WrongCat();
	void makeSound() const;
};

#endif
