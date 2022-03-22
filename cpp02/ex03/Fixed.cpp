//
// Created by Gaynell Hanh on 3/22/22.
//

#include "Fixed.hpp"


Fixed::Fixed():f_p_number(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num):f_p_number(num << Fixed::num_fr_b)
{
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num):f_p_number(roundf(num * (1 << Fixed::num_fr_b)))
{
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->f_p_number = rhs.getRawBits();
	return *this;
}

Fixed & Fixed::operator+(const Fixed &rhs)
{
//	std::cout << "Plus operator called" << std::endl;
	this->setRawBits(this->getRawBits() + rhs.getRawBits());
	return *this;
}

Fixed & Fixed::operator-(const Fixed &rhs)
{
//	std::cout << "Minus operator called" << std::endl;
	this->setRawBits(this->getRawBits() - rhs.getRawBits());
	return *this;
}

Fixed & Fixed::operator*(const Fixed &rhs)
{
//	std::cout << "Multiply operator called" << std::endl;
	this->setRawBits(this->getRawBits() * rhs.getRawBits() / (1 << Fixed::num_fr_b));
	return *this;
}

Fixed & Fixed::operator/(const Fixed &rhs)
{
//	std::cout << "Multiply operator called" << std::endl;
	this->setRawBits(this->getRawBits() / rhs.getRawBits() * (1 <<
	Fixed::num_fr_b));
	return *this;
}

Fixed & Fixed::operator++()
{
	this->f_p_number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++*this;
	return (tmp);
}

Fixed & Fixed::operator--()
{
	this->f_p_number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--*this;
	return (tmp);
}

Fixed & Fixed::min(Fixed &left, Fixed &right)
{
	return (left > right ? right : left);
}

const Fixed  & Fixed::min(const Fixed &left, const Fixed &right)
{
	return (left > right ? right : left);
}

Fixed & Fixed::max(Fixed &left, Fixed &right)
{
	return (left > right ? left : right);
}

const Fixed & Fixed::max(const Fixed &left, const Fixed &right)
{
	return (left > right ? left : right);
}

int Fixed::getRawBits() const
{
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