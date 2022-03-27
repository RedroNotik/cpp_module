//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_CAT_H
#define CPP_MODULE_CAT_H

#include "Animal.hpp"

class Cat:public Animal
{
public:
	Cat();
	Cat(Cat const &rhs);
	virtual ~Cat();
	void makeSound() const;

	Cat &operator=(Cat const &rhs);

private:
	Brain *brain;
};


#endif //CPP_MODULE_CAT_H
