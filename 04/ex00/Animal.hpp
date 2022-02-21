/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunbchoi <sunbchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:41:16 by sunbchoi          #+#    #+#             */
/*   Updated: 2022/02/20 14:50:31 by sunbchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

//Why Use virtual ~Animal() 
//virtual destructors are often used to manage classes with pointers.
//If you are not a virtual destructors, only the destructors of the Animal class is executed
//No destructor of another class inherited is called.

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;
};

#endif
