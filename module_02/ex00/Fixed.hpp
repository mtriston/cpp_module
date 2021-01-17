#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int					_number;
	static const int	_fractional = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &);
	Fixed & operator = (Fixed const &);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
