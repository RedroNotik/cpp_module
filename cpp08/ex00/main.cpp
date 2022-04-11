//
// Created by Gaynell Hanh on 4/11/22.
//

#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> v1;
		for (int i = 0; i < 5; i++)
			v1.push_back(i * i);
		for_each(v1.begin(), v1.end(), print);
		std::cout << std::endl;
		int to_find = 33;
		try
		{
			int a = easyfind(v1, to_find);
			std::cout << "Found: " <<  a << std::endl;
		}
		catch(const char *str)
		{
			std::cerr << str <<": " << to_find<< std::endl;
		}
	}
	{
		std::list<int> l1;
		l1.push_back(321);
		l1.push_back(12);
		l1.push_back(521);
		l1.push_back(21);
		for_each(l1.begin(), l1.end(), print);
		std::cout << std::endl;
		int to_find = 12;
		try
		{
			int a = easyfind(l1, to_find);
			std::cout << "Found: " <<  a << std::endl;
		}
		catch(const char *str)
		{
			std::cerr << str <<": " << to_find<< std::endl;
		}
	}
	return 0;
}