//
// Created by Gaynell Hanh on 3/23/22.
//

#ifndef CPP_MODULE_CLAPTRAP_HPP
#define CPP_MODULE_CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();

	ClapTrap & operator=(ClapTrap const &rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	int hit_points;
	int en_points;
	int attack_d;
};


#endif //CPP_MODULE_CLAPTRAP_HPP
