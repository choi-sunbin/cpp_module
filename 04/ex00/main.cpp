/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:38:02 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/23 09:52:43 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void normal_test()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "----SOUND-----"<< std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
	std::cout << "----DELETE----" << std::endl;

	delete meta;
	delete i;
	delete j;
}

void wrong_test()
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *i = new WrongCat();
	std::cout << meta->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "----SOUND-----"<< std::endl;
	meta->makeSound(); 
	i->makeSound();
	std::cout << "----DELETE----" <<std::endl;

	delete meta;
	delete i;
}

int main(){
	normal_test();
	std::cout << std::endl << "=======================================" << std::endl;
	wrong_test();
}