#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for(int i = 0; i < SZ; ++i)
		this->a[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource *obj){
	for(int i = 0; i < SZ; ++i){
		if(this->a[i]){
			delete this->a[i];
			this->a[i] = NULL;
		}
		const AMateria *t = obj->a[i];
		if (t)
			this->a[i] = t->clone();
	}
}
MateriaSource &MateriaSource::operator=(const MateriaSource &obj){
	for(int i = 0; i < SZ; ++i){
		if(this->a[i]){
			delete this->a[i];
			this->a[i] = NULL;
		}
		const AMateria *t = obj.a[i];
		if(t)
			this->a[i] = t->clone();
	}
	return *this;
}
MateriaSource::~MateriaSource(){
	for(int i = 0; i < SZ; ++i){
		if(this->a[i]){
			delete this->a[i];
			this->a[i] = NULL;
		}
	}
}
void MateriaSource::learnMateria(AMateria *obj){
	if(!obj)
		return ;
	for(int i = 0; i < SZ; ++i){
		if(!this->a[i]){
			this->a[i] = obj;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const STRING &type){
	for(int i = 0; i < SZ; ++i)
		if(this->a[i] && this->a[i]->getType() == type)
			return this->a[i]->clone();
	return NULL;
}
