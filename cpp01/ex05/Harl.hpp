//
// Created by Gaynell Hanh on 3/20/22.
//

#ifndef CPP_MODULE_HARL_HPP
#define CPP_MODULE_HARL_HPP
#include <iostream>

class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);

private:
	void debug(void );
	void info(void );
	void warning(void );
	void error(void );
};


#endif //CPP_MODULE_HARL_HPP
