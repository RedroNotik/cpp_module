//
// Created by Gaynell Hanh on 3/19/22.
//

#ifndef CPP_MODULE_HUMANB_HPP
#define CPP_MODULE_HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanB
{
public:
	void attack();
private:
	std::string name;
	Weapon weapon;
};


#endif //CPP_MODULE_HUMANB_HPP
