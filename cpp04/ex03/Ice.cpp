//
// Created by Gaynell Hanh on 3/27/22.
//

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
//	this->type = "ice";
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
	type = rhs.getType();
	return *this;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
	std::endl;
}

AMateria * Ice::clone() const
{
	return (new Ice());
}