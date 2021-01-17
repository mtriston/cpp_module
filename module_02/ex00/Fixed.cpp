#include "Fixed.hpp"

Fixed::Fixed() : _number(0)
{
    std::cout << "Default constructor called" << std::endl;
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
