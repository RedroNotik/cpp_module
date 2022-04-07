//
// Created by Gaynell Hanh on 4/6/22.
//

#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Incorrect num of argc\n";
		return 0;
	}
	Convert num(argv[1]);
	num.Check_type();
}