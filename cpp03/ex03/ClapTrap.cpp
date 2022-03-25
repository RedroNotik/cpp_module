//
// Created by Gaynell Hanh on 3/23/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default"), hit_points(10), en_points(10),
attack_d(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name):name(name), hit_points(10), en_points(10),
										   attack_d(0)
{
	std::cout << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->hit_points = rhs.hit_points;
	this->en_points = rhs.en_points;
	this->attack_d = rhs.attack_d;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (en_points > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target
				  << ", causing " << attack_d << " points of damage!"<< std::endl;
		en_points--;
	}
	else
		std::cout << name << " doesnt have enough energy" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (en_points > 0)
	{
		std::cout << "ClapTrap " << name << " is healing himself for "
		<< amount << std::endl;
		en_points--;
		hit_points += amount;
	}
	else
		std::cout << name << " doesnt have enough energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " is heated for " << amount << std::endl;
	hit_points -= amount;
	if (hit_points <= 0)
	{
		std::cout << name << " is dead" << std::endl;
	}

}