//
// Created by Gaynell Hanh on 3/23/22.
//

#ifndef CPP_MODULE_CLAPTRAP_HPP
#define CPP_MODULE_CLAPTRAP_HPP


class ClapTrap
{
public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_MODULE_CLAPTRAP_HPP
