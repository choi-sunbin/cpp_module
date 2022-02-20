#include "Character.hpp"

Character::Character() : name(""){
	for(int i = 0; i < SZ; ++i)
		a[i] = NULL;
}
Character::Character(const STRING &name) : name(name){
	for(int i = 0; i < SZ; ++i)
		a[i] = NULL;
}
Character::Character(const Character &obj) : name(obj.getName()){
	for(int i = 0; i < SZ; ++i){
		if(this->a[i]){
			delete this->a[i];
			this->a[i] = NULL;
		}
		const AMateria *t = obj.a[i];
		if(t)
			this->a[i] = t->clone();
	}
}
Character &Character::operator=(const Character &obj){
	this->name = obj.getName();
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
Character::~Character(){
	for(int i = 0; i < SZ; ++i){
		if(this->a[i]){
			delete this->a[i];
			this->a[i] = NULL;
		}
	}
}

const STRING &Character::getName() const{ return this->name; }
void Character::equip(AMateria *obj){
	if(!obj)
		return ;
	for(int i = 0; i < SZ; ++i){
		if(!this->a[i]){
			this->a[i] = obj;
			return ;
		}
	}
}
void Character::unequip(int idx){
	if(!(idx >= 0 && idx < SZ))
		return ;
	this->a[idx] = NULL;
}
void Character::use(int idx, ICharacter &obj){
	if(idx >= 0 && idx < SZ && this->a[idx]){
		this->a[idx]->use(obj);
		return ;
	}
}
