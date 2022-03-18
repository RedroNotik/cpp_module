//
// Created by Gaynell Hanh on 3/17/22.
//

#ifndef CPP_MODULE_ZOMBIE_HPP
#define CPP_MODULE_ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
	std::string name;
public:
	void announce(void) const;
	void set_name(std::string name);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};


#endif //CPP_MODULE_ZOMBIE_HPP
