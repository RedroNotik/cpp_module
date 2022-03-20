//
// Created by Gaynell Hanh on 3/19/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name): name(name)
{
	std::cout << name << " is created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " is destroyed" << std::endl;
}

void HumanB::attack() const
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() <<
		std::endl;
	else
		std::cout << name << " cannot attack without weapon"<< std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}