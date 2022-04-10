//
// Created by Gaynell Hanh on 4/10/22.
//

#ifndef CPP_MODULE_ITER_HPP
#define CPP_MODULE_ITER_HPP
#include <iostream>

template<typename T>
void iter(T *array, int length,  void (*foo)(T &x))
{
	for (int i = 0; i < length; i++)
		foo(array[i]);
}

template<typename T>
void print(T &x)
{
	std::cout << x << std::endl;
}

template<typename T>
void pow(T &x)
{
	x *= x;
}

#endif //CPP_MODULE_ITER_HPP