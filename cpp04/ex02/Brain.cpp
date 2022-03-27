//
// Created by Gaynell Hanh on 3/27/22.
//

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor is called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (size_t i = 0; i < rhs.ideas->length(); i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}