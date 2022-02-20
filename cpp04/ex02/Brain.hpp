#ifndef BRAIN_HPP
#define BRAIN_HPP

#define ENDL	std::endl
#define COUT	std::cout
#define STRING	std::string
#define OSTREAM	std::ostream

#define BRAIN	"Brain"
#define SZ		100
#include <iostream>
#include <string>

class Brain
{
private:
	STRING idea[SZ];
public:
	Brain();
	Brain(const Brain &obj);
	Brain &operator=(const Brain &obj);
	~Brain();

	STRING getIdea(const int &idx) const;
};

OSTREAM &operator<<(OSTREAM &output, const Brain &obj);

#endif