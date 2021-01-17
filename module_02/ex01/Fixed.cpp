#include "Fixed.hpp"

Fixed::Fixed() : _number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	_number = n << _fractional;
	if ((std::abs(n) >= 1) && (_number == 0))
	{
		std::cout << "Integer overflow" << std::endl;
	}
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n)
{
	_number = static_cast<int>(roundf(n * (1 << _fractional)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &a) : _number(a._number)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &a)
{
	if (this != &a)
	{
		_number = a._number;
	}
	std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_number);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_number = raw;
}

int Fixed::toInt(void) const
{
	return (_number >> _fractional);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_number) / (1 << _fractional));
}

std::ostream& operator << (std::ostream &os, const Fixed &p)
{
	return (os << p.toFloat());
}
