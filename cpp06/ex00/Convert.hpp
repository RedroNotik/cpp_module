//
// Created by Gaynell Hanh on 4/6/22.
//

#ifndef CPP_MODULE_CONVERT_HPP
#define CPP_MODULE_CONVERT_HPP
#include <iostream>

class Convert
{
private:
	const char *_str;
	Convert();
public:
class NonDisplay : public std::exception
{
	virtual const char *what() const throw();
};
class Impossible : public std::exception
{
	virtual const char *what() const throw();
};
	Convert(const char str[]);
	Convert(Convert &rhs);
	~Convert();

	Convert &operator=(Convert const &rhs);

	void printDouble(double num) const;
	void printFloat(float num) const;
	void printChar(int num) const;
	void printInt(long num) const;
	void Check_type() const;
};


#endif //CPP_MODULE_CONVERT_HPP
