//
// Created by Gaynell Hanh on 3/25/22.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
public:
	Dog();
	Dog(Dog const &rhs);
	virtual ~Dog();
	virtual void makeSound() const;

	Dog &operator=(Dog const &rhs);
};


#endif //CPP_MODULE_DOG_HPP
