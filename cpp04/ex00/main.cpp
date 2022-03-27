//
// Created by Gaynell Hanh on 3/25/22.
//
#include "Dog.hpp"
#include "Cat.h"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *j = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
	}
	return 0;
}