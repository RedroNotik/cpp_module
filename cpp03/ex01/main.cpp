//
// Created by Gaynell Hanh on 3/23/22.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap man("Bob");
	man.guardGate();
	man.attack("Someone");
	man.takeDamage(15);
	ScavTrap mike(man);
	mike.takeDamage(99);
	return(0);
}