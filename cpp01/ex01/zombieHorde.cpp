//
// Created by Gaynell Hanh on 3/18/22.
//

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* _horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		_horde[i].set_name(name);
	return (_horde);
}