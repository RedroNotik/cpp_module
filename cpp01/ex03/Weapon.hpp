//
// Created by Gaynell Hanh on 3/19/22.
//

#ifndef CPP_MODULE_WEAPON_HPP
#define CPP_MODULE_WEAPON_HPP
#include <iostream>

class Weapon
{
public:
	Weapon();
	Weapon(std::string const &type);
	~Weapon();
	std::string const &getType() const;
	void setType(std::string type);

private:
	std::string type;
};


#endif //CPP_MODULE_WEAPON_HPP
