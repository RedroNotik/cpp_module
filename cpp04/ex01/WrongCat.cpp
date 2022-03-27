//
// Created by Gaynell Hanh on 3/27/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor is called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "Copy WrongCat constructor is called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
//	(void )rhs;
	this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "BARK MEOW BARK" << std::endl;
}