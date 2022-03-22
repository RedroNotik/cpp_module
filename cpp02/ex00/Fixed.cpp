//
// Created by Gaynell Hanh on 3/22/22.
//

#include "Fixed.hpp"


Fixed::Fixed():f_p_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->f_p_number = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->f_p_number;
}

void Fixed::setRawBits(const int raw)
{
	this->f_p_number = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.getRawBits();
	return o;
}