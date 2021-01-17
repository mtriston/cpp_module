#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_number;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &);
	Fixed & operator = (Fixed const &);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const;
	int 	toInt(void) const;
};

std::ostream& operator << (std::ostream &os, const Fixed &p);

#endif
