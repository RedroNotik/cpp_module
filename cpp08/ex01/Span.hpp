//
// Created by Gaynell Hanh on 4/11/22.
//

#ifndef CPP_MODULE_SPAN_HPP
#define CPP_MODULE_SPAN_HPP

#include <iostream>
#include <set>

//template<typename T>
class Span
{
public:
class AlreadyInSet:public std::exception
{
	virtual const char* what() const throw();
};
class MaxSize: public std::exception
{
	virtual const char* what() const throw();
};
class FewElements: public std::exception
{
	virtual const char* what() const throw();
};
	Span(unsigned int n);
	Span(Span const&rhs);
	Span &operator=(Span const &rhs);
	~Span();
	void addNumber(int num);
	int shortestSpan() const;
	void adding(std::set<int>::iterator it, std::set<int>::iterator iter);
	int longestSpan() const;
private:
	Span();
	std::set<int> st;
	unsigned int max_size;
};


#endif //CPP_MODULE_SPAN_HPP
