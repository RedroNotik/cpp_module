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

	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	Fixed &operator+(Fixed const & rhs);
	Fixed &operator-(Fixed const & rhs);
	Fixed &operator*(Fixed const & rhs);
	Fixed &operator/(Fixed const & rhs);

	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();

	static Fixed &min(Fixed &left, Fixed &right);
	static const Fixed &min(Fixed const &left, Fixed const &right);
	static Fixed &max(Fixed &left, Fixed &right);
	static const Fixed &max(Fixed const &left, Fixed const &right);
private:
	int f_p_number;
	static const int num_fr_b = 8;
};


std::ostream & operator<<(std::ostream &o, Fixed const & i);
#endif //CPP_MODULE_FIXED_HPP
