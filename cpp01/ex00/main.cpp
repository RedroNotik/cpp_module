//
// Created by Gaynell Hanh on 3/17/22.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie* kek = newZombie("Alex");
	kek->announce();
	delete kek;
	randomChump("John");

	return (0);
}