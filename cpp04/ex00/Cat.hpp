#ifndef CAT_HPP
#define CAT_HPP

#define CAT	"Cat"

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Animal &obj);
	Cat &operator=(const Animal &obj);
	virtual ~Cat();
	void makeSound() const;
};

#endif
