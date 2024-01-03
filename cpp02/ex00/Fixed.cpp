#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : value(new int(0))
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	delete value;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	value = new int(*other.value);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &other)
	{
		*value = *other.value;
	}
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	*value = raw;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return *value;
}
