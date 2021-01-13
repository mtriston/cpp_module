#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	_type = type;
}

std::string const &	Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string const & type)
{
	_type = type;
}
