//
// Created by Gaynell Hanh on 4/10/22.
//

#include "Test.hpp"

Test::Test():_num(15)
{}

Test::Test(int num):_num(num)
{}

Test::Test(double num):_num(num)
{}

Test::Test(Test &rhs)
{
	*this = rhs;
}

Test::~Test()
{}

Test &Test::operator=(const Test &rhs)
{
	_num = rhs._num;
	return *this;
}

Test &Test::operator*=(const Test &rhs)
{
	_num *= rhs._num;
	return *this;
}

double Test::getNum() const
{return _num;}

std::ostream &operator<<(std::ostream &o, Test const &test)
{
	o << "TEST:" << test.getNum();
	return o;
}