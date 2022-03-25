//
// Created by Gaynell Hanh on 3/25/22.
//

#ifndef CPP_MODULE_DIAMONDTRAP_HPP
#define CPP_MODULE_DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap();
	void attack(const std::string &target);

	DiamondTrap &operator=(DiamondTrap const &src);
	void whoAmI();
private:
	std::string name;
};


#endif //CPP_MODULE_DIAMONDTRAP_HPP
