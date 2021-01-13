#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : _name(name) {}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with his ";
	std::cout << (*_weapon).getType() << std::endl;
}
