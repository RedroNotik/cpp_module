//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Cure.hpp"

#include "Cure.hpp"


void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

Cure::Cure() : AMateria("cure"){}

Cure::~Cure(){}

Cure &Cure::operator=(Cure const &obj)
{
	if (&obj == this)
		return (*this);
	type = obj.getType();
	return (*this);
}

Cure::Cure(Cure const &obj): AMateria("cure")
{
	type = obj.getType();
}