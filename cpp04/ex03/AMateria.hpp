#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define ENDL	std::endl
#define COUT	std::cout
#define STRING	std::string
#define OSTREAM	std::ostream

#include <string>
#include <iostream>

#define SZ	10

class ICharacter;

class AMateria
{
protected:
	STRING type;
public:
	AMateria();
	AMateria(const AMateria &obj);
	AMateria(const STRING &type);
	AMateria &operator=(const AMateria &obj);
	virtual ~AMateria(void);

	const STRING &getType() const;
	virtual void use(const ICharacter &obj);

	virtual AMateria *clone() const = 0;
};

#endif
