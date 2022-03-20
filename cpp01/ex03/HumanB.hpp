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
	HumanB(std::string const &name);
	~HumanB();
	void setWeapon(const Weapon &weapon);
	void attack() const;
private:
	std::string name;
	const Weapon *weapon;
};


#endif //CPP_MODULE_HUMANB_HPP
