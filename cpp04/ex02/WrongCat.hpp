//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_WRONGCAT_HPP
#define CPP_MODULE_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &rhs);
	virtual ~WrongCat();
	void makeSound() const;

	WrongCat &operator=(WrongCat const &rhs);
};


#endif //CPP_MODULE_WRONGCAT_HPP
