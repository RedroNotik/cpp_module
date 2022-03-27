//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_BRAIN_HPP
#define CPP_MODULE_BRAIN_HPP
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(Brain const &rhs);
	virtual ~Brain();
	Brain &operator=(Brain const &rhs);

private:
	std::string ideas[100];
};


#endif //CPP_MODULE_BRAIN_HPP
