//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_WRONGANIMAL_HPP
#define CPP_MODULE_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	virtual ~WrongAnimal();
	void makeSound() const;

	std::string getType() const;
	WrongAnimal &operator=(WrongAnimal const &rhs);
protected:
	std::string type;
};


#endif //CPP_MODULE_WRONGANIMAL_HPP
