//
// Created by Gaynell Hanh on 3/18/22.
//

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &strREF = str;

	std::cout << &str << ' ' << stringPTR << ' ' << &strREF << std::endl;
	std::cout << str << ' ' << *stringPTR << ' ' << strREF << std::endl;
}