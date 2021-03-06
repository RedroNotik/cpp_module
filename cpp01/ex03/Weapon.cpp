//
// Created by Gaynell Hanh on 3/19/22.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type):type(type)
{}

Weapon::~Weapon()
{}

std::string const &Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}
