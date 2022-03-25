//
// Created by Gaynell Hanh on 3/25/22.
//

#ifndef CPP_MODULE_ANIMAL_HPP
#define CPP_MODULE_ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	Animal(Animal const &rhs);
	virtual ~Animal();
	virtual void makeSound() const;

	Animal &operator=(Animal const &rhs);
protected:
	std::string type;
};


#endif //CPP_MODULE_ANIMAL_HPP
