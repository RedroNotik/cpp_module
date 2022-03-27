//
// Created by Gaynell Hanh on 3/27/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Animal")
{
	std::cout << "Default WrongAnimal constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "Copy WrongAnimal constructor is called" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
//	(void )rhs;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "It's Wronganimal sound!" << std::endl;
}
