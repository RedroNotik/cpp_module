//
// Created by Gaynell Hanh on 4/7/22.
//

#ifndef CPP_MODULE_BASE_HPP
#define CPP_MODULE_BASE_HPP

#include <iostream>

class Base
{
public:
	virtual ~Base();
};

class A:public Base
{};

class B:public Base
{};

class C:public Base
{};

#endif //CPP_MODULE_BASE_HPP
