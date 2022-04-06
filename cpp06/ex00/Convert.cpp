//
// Created by Gaynell Hanh on 4/6/22.
//

#include "Convert.hpp"

Convert::Convert(const char *str):_str(str)
{
	_value = std::stod(_str);
}

Convert::Convert(Convert &rhs)
{
	*this = rhs;
}

Convert &Convert::operator=(const Convert &rhs)
{
	(void)rhs;
	return *this;
}

Convert::~Convert()
{}

void Convert::printChar() const
{
	std::cout << "char: ";
	try {
		int a = static_cast<int>(_value);
//		long a = static_cast<long>(std::strtol(_str,NULL, 10));
//		if (a == LONG_MAX || a == LONG_MIN || a == 0)
//			throw Impossible();
		if (!isprint(a))
			throw Convert::NonDisplay();
		std::cout << static_cast<char >(a) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *Convert::NonDisplay::what() const throw()
{return "Non displayable";}

const char *Convert::Impossible::what() const throw()
{return  "impossible";}
