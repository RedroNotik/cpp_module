//
// Created by Gaynell Hanh on 3/17/22.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}