//
// Created by Gaynell Hanh on 3/22/22.
//

#include "Point.hpp"

Point::Point():x(Fixed()), y(Fixed())
{
//	std::cout << "Default POINT constructor called" << std::endl;
}

Point::Point(const Fixed x, const Fixed y):x(x), y(y)
{
//	std::cout << "XY POINT constructor called" << std::endl;
}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y)) {}

Point::Point(Point const  &src):x(src.x), y(src.y)
{
//	std::cout << "POINT COPY constructor called" << std::endl;
}

Point::~Point()
{
//	std::cout << "Point Destructor constructor called" << std::endl;
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}


Point &Point::operator=( Point const &rhs)
{
	(void)rhs;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Point const & rhs)
{
	o << "("<< rhs.getX() << "," << rhs.getY() << ")" << std::endl;
	return o;
}