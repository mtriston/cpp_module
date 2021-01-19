#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const & a) : _name(a._name), _apcost(a._apcost), _damage(a._damage) {}

AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator=(AWeapon const & a)
{
	if (this != &a)
	{
		_name = a._name;
		_apcost = a._apcost;
		_damage = a._damage;
	}
	return (*this);
}


std::string const &	AWeapon::getName() const { return (_name); }
int					AWeapon::getAPCost() const { return (_apcost); }
int					AWeapon::getDamage() const { return (_damage); }
