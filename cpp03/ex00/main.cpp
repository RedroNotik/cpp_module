//
// Created by Gaynell Hanh on 3/23/22.
//

#include "ClapTrap.hpp"

int main()
{
	ClapTrap *bob = new ClapTrap("Bob");
	ClapTrap *def = new ClapTrap();
	def->attack("Alex");
	bob->takeDamage(10);
	def->beRepaired(10);
	def->takeDamage(15);
	def->takeDamage(7);
	return(0);
}