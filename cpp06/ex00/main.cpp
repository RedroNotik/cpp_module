//
// Created by Gaynell Hanh on 4/6/22.
//

#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return 0;
//	try
//	{
		Convert num(argv[1]);
		num.printChar();
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
}