#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int value;
	static const int fractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(const float x);
	Fixed(const int x);
	Fixed(const Fixed &other); 
	Fixed &operator=(const Fixed &other); 
	void setRawBits(int const raw);
	int getRawBits(void) const;
	int toInt(void) const;
	float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
