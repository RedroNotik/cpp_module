//
// Created by Gaynell Hanh on 4/11/22.
//

#ifndef CPP_MODULE_EASYFIND_HPP
#define CPP_MODULE_EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>
# include <vector>
# include <iomanip>

template<typename T>
int easyfind(T &container, int num)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw "Num not found";
	return *it;
}

void print(int num)
{
	std::cout << num << " ";
}

#endif //CPP_MODULE_EASYFIND_HPP
