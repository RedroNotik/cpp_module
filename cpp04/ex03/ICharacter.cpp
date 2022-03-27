//
// Created by Gaynell Hanh on 3/27/22.
//

#include "ICharacter.hpp"

Character::Character(){};

Character::Character(const std::string &rhs):name(rhs)
{
	std::cout << "Character constructor is called" << std::endl;
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i])
	}
}

std::string const Character::getName() const
{
	return (this->name);
}

Character &Character::operator=(const Character &rhs)
{
	this->name = rhs.getName();
	return *this;
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (inventory[i])
		i++;
	if (i < 4)
		inventory[i] = m;
	else
		delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inventory[idx] = nullptr;
}