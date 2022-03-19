//
// Created by Gaynell Hanh on 3/19/22.
//

#include "HumanA.hpp"

//HumanA::HumanA()
//{}
//
//HumanA::HumanA(std::string name):name(name)
//{}

HumanA::~HumanA()
{}

HumanA::HumanA(std::string const &name, const Weapon &weapon):name(name), weapon
(weapon)
{}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}