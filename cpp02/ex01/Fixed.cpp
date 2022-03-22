//
// Created by Gaynell Hanh on 3/22/22.
//

#include "Fixed.hpp"


Fixed::Fixed():f_p_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num):f_p_number(num << Fixed::num_fr_b)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num):f_p_number(roundf(num * (1 << Fixed::num_fr_b)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->f_p_number = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->f_p_number;
}

void Fixed::setRawBits(const int raw)
{
	this->f_p_number = raw;
}

float Fixed::toFloat() const
{
	return ((float)f_p_number / (float) (1 << Fixed::num_fr_b));
}

int Fixed::toInt() const
{
	return (f_p_number >> Fixed::num_fr_b);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}