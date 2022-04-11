//
// Created by Gaynell Hanh on 4/11/22.
//

#include "Span.hpp"


Span::Span(unsigned int n):max_size(n)
{}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span &Span::operator=(const Span &rhs)
{
	std::set<int>::iterator it = rhs.st.begin();
	while (it != rhs.st.end())
	{
		this->st.insert(*it);
		it++;
	}
	this->max_size = rhs.max_size;
	return (*this);
}

Span::~Span()
{}


const char *Span::MaxSize::what() const throw()
{
	return("Already max size");
}

const char *Span::FewElements::what() const throw()
{
	return ("Too few elements");
}

const char *Span::AlreadyInSet::what() const throw()
{
	return("Num is already in set");
}

int Span::shortestSpan() const
{
	if (st.size() < 2)
		throw FewElements();
	std::set<int>::iterator it = st.begin();
	int res = *(--st.end());
	for (std::set<int>::iterator it_next = ++st.begin(); it_next != st.end();
	it_next++, it++)
	{
		if (abs(*it - *(it_next)) < res)
			res = abs(*it - *(it_next));
	}
	return res;
}

int Span::longestSpan() const
{
	if (st.size() < 2)
		throw FewElements();
	return (*(--st.end()) - *st.begin());
}

void Span::adding(std::set<int>::iterator it, std::set<int>::iterator iter)
{
	try
	{
		while (it != iter)
		{
			this->addNumber(*it);
			it++;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Span::addNumber(int num)
{
	try
	{
		if (st.size() == max_size)
			throw MaxSize();
		if (st.find(num) != st.end())
			throw AlreadyInSet();
		st.insert(num);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

