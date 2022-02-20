#ifndef CAT_HPP
#define CAT_HPP

#define CAT	"Cat"

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &obj);
	Cat &operator=(const Cat &obj);
	virtual ~Cat();
	void makeSound() const;
	const Brain *getBrain() const;
};

#endif
