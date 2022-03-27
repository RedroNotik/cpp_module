//
// Created by Gaynell Hanh on 3/27/22.
//

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Default Ice constructor is called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor is called" << std::endl;
}

Ice::Ice(const Ice &rhs)
{
	*this = rhs;
}

Ice &Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return *this;
}

void Ice::use(ICharacter &target)
{
	std::cout << "Ice: \"* shoots an ice bolt at" << target.getName() << " *\"";
}

AMateria * Ice::clone() const
{
	AMateria *ice = new Ice();
	return ice;
}