//
// Created by Gaynell Hanh on 3/23/22.
//

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap man("Bob");

	man.attack("Someone");
	man.highFivesGuys();
	return(0);
}