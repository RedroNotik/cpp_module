//
// Created by Gaynell Hanh on 3/17/22.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << this->name << "Zombie is created" << std::endl;
}

Zombie::Zombie(std::string name):name(name)
{}

Zombie::~Zombie()
{
	std::cout << this->name << " zombie is destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std:: endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}