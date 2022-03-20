//
// Created by Gaynell Hanh on 3/19/22.
//

#ifndef CPP_MODULE_HUMANA_HPP
#define CPP_MODULE_HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanA
{
public:
	HumanA(std::string const &name, const Weapon &weapon);
	~HumanA();
	void attack() const;
private:
	std::string name;
	const Weapon &weapon;
};


#endif //CPP_MODULE_HUMANA_HPP
