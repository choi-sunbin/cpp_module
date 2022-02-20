#include "Brain.hpp"

STRING make_name(int idx){
	const static STRING num = "ABCDEFGHIJ";
	STRING ret;
	while (idx){
		ret.push_back(num[idx % 10]);
		idx /= 10;
	}
	return ret;
}

Brain::Brain(){
	for(int i = 0; i < SZ; ++i)
		idea[i] = make_name(i + 1);
	COUT << "< Brain > Default consturctor" << ENDL;
}
Brain::Brain(const Brain &obj){
	for(int i = 0; i < SZ; ++i)
		idea[i] = obj.getIdea(i);
	COUT << "< Brain > Copy consturctor" << ENDL;
}
Brain &Brain::operator=(const Brain &obj){
	for(int i = 0; i < SZ; ++i)
		idea[i] = obj.getIdea(i);
	COUT << "< Brain > Copy Assigned" << ENDL;
	return *this;
}
Brain::~Brain(){ COUT << "< Brain > Destructor" << ENDL; }
STRING Brain::getIdea(const int &idx) const{ return this->idea[idx]; }
OSTREAM &operator<<(OSTREAM &output, const Brain &obj){
	for(int i = 0; i < SZ; ++i)
		output << "[BrainNum:" << i + 1 << "]\t" << obj.getIdea(i) << ENDL;
	return output;
}