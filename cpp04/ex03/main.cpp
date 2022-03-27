//
// Created by Gaynell Hanh on 3/27/22.
//

#include "AMateria.hpp"
#include "Ice.hpp"


int main()
{
	AMateria *ice = new Ice();
	std::cout << ice->getType();
	return 0;
}