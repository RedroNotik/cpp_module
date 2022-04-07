//
// Created by Gaynell Hanh on 4/6/22.
//

#include "Convert.hpp"

Convert::Convert(const char *str):_str(str)
{}

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

void Convert::Check_type() const
{
	if (isprint(_str[0]) && !isdigit(_str[0]) && !_str[1])
	{
		char num = _str[0];
		printChar(num);
		printInt(static_cast<int>(num));
		printFloat(static_cast<float>(num));
		printDouble(static_cast<double>(num));
	}
	else if (!strchr(_str, '.') && isdigit(_str[0]))
	{
		int num = atoi(_str);
		printChar(num);
		printInt(static_cast<long>(num));
		printFloat(static_cast<float>(num));
		printDouble(static_cast<double>(num));
	}
	else
	{
		double num = std::strtod(_str, nullptr);
		printChar(static_cast<int>(num));
		printInt(static_cast<long>(num));
		printFloat(static_cast<float>(num));
		printDouble(static_cast<double>(num));
	}
}

void Convert::printDouble(double num) const
{
	std::cout << "double: " << num << std::endl;
}

void Convert::printFloat(float num) const
{
	std::cout.precision(1);
	std::cout << std::fixed ;
	std::cout << "float: " << num << "f" << std::endl;
}

void Convert::printChar(int num) const
{
	std::cout << "char: ";
	try
	{
		if (num < CHAR_MIN || num > CHAR_MAX)
			throw Convert::Impossible();
		if (!isprint(num))
			throw Convert::NonDisplay();
		std::cout << static_cast<char >(num) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Convert::printInt(long num) const
{
	std::cout << "int: " ;
	try
	{
		if (num > INT_MAX || num < INT_MIN)
			throw Convert::Impossible();
		std::cout << num << std::endl;
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
