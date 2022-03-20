//
// Created by Gaynell Hanh on 3/20/22.
//

#include "Harl.hpp"


int main(int argc, char *argv[])
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Incorrect number of argc" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}