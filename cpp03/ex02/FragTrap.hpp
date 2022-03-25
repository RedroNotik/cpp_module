//
// Created by Gaynell Hanh on 3/25/22.
//

#ifndef CPP_MODULE_FRAGTRAP_HPP
#define CPP_MODULE_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap & operator=(FragTrap const &rhs);
	void highFivesGuys(void);
};


#endif //CPP_MODULE_FRAGTRAP_HPP
