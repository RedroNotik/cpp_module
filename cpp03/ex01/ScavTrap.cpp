//
// Created by Gaynell Hanh on 3/25/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default SCAV constructor is called" << std::endl;
	this->hit_points = 100;
	this->en_points = 50;
	this->attack_d = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "Copy SCAV constructor called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << name << " SCAV constructor called" << std::endl;
	this->hit_points = 100;
	this->en_points = 50;
	this->attack_d = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " SCAV Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" <<
	std::endl;
}

void ScavTrap::attack(const std::string target)
{
	if (en_points > 0)
	{
		std::cout << "ScavTRAP " << name << " attacks " << target
				  << ", causing " << attack_d << " points of damage!"<< std::endl;
		en_points--;
	}
	else
		std::cout << name << " doesnt have enough energy" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
//	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->en_points = rhs.en_points;
	this->attack_d = rhs.attack_d;
	return *this;
}