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
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

Character &Character::operator=(const Character &rhs)
{
	if (&rhs == this)
		return *this;
	this->name = rhs.getName();
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
		if (rhs.inventory[i] != nullptr)
			inventory[i] = rhs.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
	return *this;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != nullptr)
	{
		inventory[idx]->use(target);
	}
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