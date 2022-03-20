//
// Created by Gaynell Hanh on 3/20/22.
//

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{
	void (Harl::*foo[]) (void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	std::string level_inf[] =
			{
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
			};

	int i = 0;
	for (i = 0; i < 4; i++)
		if (level == level_inf[i])
			break ;
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*foo[0])();
		case 1:
			std::cout <<"[ INFO ]"<< std::endl;
			(this->*foo[1])();
		case 2:
			std::cout << "[ WARNING ]"<< std::endl;
			(this->*foo[2])();
		case 3:
			std::cout << "[ ERROR ]"<< std::endl;
			(this->*foo[3])();
			break;
		default:
			std::cout << "Incorrect level" << std::endl;
	}
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				 "didn’t put enough bacon in my burger! If you did, I "
				 "wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error()
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now."
	<<std::endl;
}