//
// Created by Gaynell Hanh on 3/25/22.
//

#ifndef CPP_MODULE_FRAGTRAP_HPP
#define CPP_MODULE_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap & operator=(FragTrap const &rhs);
	void highFivesGuys(void);

protected:
	int fr_hp;
	int fr_ad;
};


#endif //CPP_MODULE_FRAGTRAP_HPP
