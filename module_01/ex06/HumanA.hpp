#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(std::string const &name, Weapon &weapon);
	void	attack();
};

#endif
