//
// Created by Gaynell Hanh on 3/27/22.
//

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor is called" << std::endl;
}

AMateria::AMateria(const std::string &type):type(type)
{
	std::cout << "Type AMateria constructor is called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor is called" << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	(void )rhs;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Just a materia attacks" << target.getName() << std::endl;
}