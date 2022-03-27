//
// Created by Gaynell Hanh on 3/25/22.
//
#include "Dog.hpp"
#include "Cat.h"
#include "WrongCat.hpp"
#define SIZE 10

int main()
{
	Animal *meta[SIZE];
	for(int i = 0; i < SIZE / 2; i++)
		meta[i] = new Dog();
	for(int i = SIZE / 2; i < SIZE; i++)
		meta[i] = new Cat();
	for (int i = 0; i < SIZE; ++i)
	{
		meta[i]->makeSound();
	}

	for (int i = 0; i < SIZE; ++i)
	{
		delete meta[i];
	}
//	Animal animal; doesnt work
	return 0;
}