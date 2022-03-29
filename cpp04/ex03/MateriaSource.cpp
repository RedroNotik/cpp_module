//
// Created by Gaynell Hanh on 3/29/22.
//

#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == nullptr)
		{
			inventory[i] = materia;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
		if (inventory[i]->getType() == type)
			return (inventory[i]->clone());
	return (nullptr);
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = nullptr;
	}
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; ++i)
	{
		if (src.inventory[i] != nullptr)
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	if (&src == this)
		return (*this);
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
		if (src.inventory[i] != nullptr)
			inventory[i] = src.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
	return (*this);
}