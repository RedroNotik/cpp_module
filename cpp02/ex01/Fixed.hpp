//
// Created by Gaynell Hanh on 3/22/22.
//

#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
public:
	Fixed(void);
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const & src);
	~Fixed();

	float toFloat(void ) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed & operator=(Fixed const & rhs);

private:
	int f_p_number;
	static const int num_fr_b = 8;
};


std::ostream & operator<<(std::ostream &o, Fixed const & i);
#endif //CPP_MODULE_FIXED_HPP
