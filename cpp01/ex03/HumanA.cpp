//
// Created by Gaynell Hanh on 3/19/22.
//

#include "HumanA.hpp"

HumanA::~HumanA()
{
	std::cout << name << " is destroyed" << std::endl;
}

HumanA::HumanA(std::string const &name, const Weapon &weapon):name(name), weapon
(weapon)
{
	std::cout << name << " is created" << std::endl;
}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}