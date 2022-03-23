//
// Created by Gaynell Hanh on 3/22/22.
//

#include "Point.hpp"

Fixed check(Point a, Point b, Point c)
{
	std::cout << "Wow: " << (b.getX() - a.getX()) * (c.getY() - b.getY())
							<< " "<< (c.getX() - b.getX())*(b.getX() - a.getY()
							) <<
							std::endl;
	return ((b.getX() - a.getX()) * (c.getY() - b.getY())
			- (c.getX() - b.getX())*(b.getX() - a.getY()));
}

bool bsp (Point const a, Point const b, Point const c, Point const point)
{
	bool first, second, third;

	first = check(point, a, b) > 0;
	second = check(point, b, c) > 0;
	third = check(point, c, a) > 0;

	std::cout << first << " " << second << " " << third << std::endl;
	return first && second && third;
	return 1;
}