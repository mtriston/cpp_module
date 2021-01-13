#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
private:
	std::string		_name;
	Weapon*			_weapon;

public:
	HumanB(std::string const &);
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif
