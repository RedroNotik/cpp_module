//
// Created by Gaynell Hanh on 3/25/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FRAG constructor is called" << std::endl;
	this->hit_points = 100;
	this->en_points = 100;
	this->attack_d = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "Copy FRAG constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string name)
{

	std::cout << name << " FRAG constructor called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->en_points = 100;
	this->attack_d = 30;
}

FragTrap::~FragTrap()
{
	std::cout << name << " FRAG Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
//	this->name = rhs.name;
	this->hit_points = rhs.hit_points;
	this->en_points = rhs.en_points;
	this->attack_d = rhs.attack_d;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::string help;
	std::cout << "High fives!" << std::endl;
	while (1)
	{
		getline(std::cin, help);
		if (help[0] == '5')
			break;
	}
}