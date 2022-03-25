//
// Created by Gaynell Hanh on 3/25/22.
//

#ifndef CPP_MODULE_SCAVTRAP_HPP
#define CPP_MODULE_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const &rhs);
	void guardGate();
	void attack(const std::string target);
};


#endif //CPP_MODULE_SCAVTRAP_HPP
