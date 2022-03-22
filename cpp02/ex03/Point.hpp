//
// Created by Gaynell Hanh on 3/22/22.
//

#ifndef CPP_MODULE_POINT_HPP
#define CPP_MODULE_POINT_HPP
#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(const float x, const float y);
	Point(Point const &src);
	~Point();

	Point &operator=(Point const &rhs);
	Fixed getY(void) const;
	Fixed getX(void ) const;
private:
	Fixed const x;
	Fixed const y;
};

std::ostream & operator<<(std::ostream &o, Point const & i);
#endif //CPP_MODULE_POINT_HPP
