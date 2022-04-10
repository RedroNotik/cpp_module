//
// Created by Gaynell Hanh on 4/10/22.
//

#ifndef CPP_MODULE_TEST_HPP
#define CPP_MODULE_TEST_HPP
#include <iostream>

class Test
{
private:
	double _num;
public:
	Test();
	Test(int num);
	Test(double num);
	~Test();
	Test(Test &rhs);
	Test &operator=(Test const &rhs);
	Test &operator*=(Test const &rhs);

	double getNum() const;
};

std::ostream &operator<<(std::ostream &o, Test const &test);


#endif //CPP_MODULE_TEST_HPP
