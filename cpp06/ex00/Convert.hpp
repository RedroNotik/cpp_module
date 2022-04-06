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
	double _value;
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

	void printDouble() const;
	void printFloat() const;
	void printChar() const;
	void printInt() const;
};


#endif //CPP_MODULE_CONVERT_HPP
