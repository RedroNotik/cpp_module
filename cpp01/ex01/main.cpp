//
// Created by Gaynell Hanh on 3/18/22.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie* _horde = zombieHorde(5, "Alex");
	for (int i = 0; i < 5; i++)
	{
		_horde[i].announce();
	}
	delete [] _horde;
	return (0);
}