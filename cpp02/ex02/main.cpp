//
// Created by Gaynell Hanh on 3/22/22.
//

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a = a + 11;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}