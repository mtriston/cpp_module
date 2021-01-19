#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}
PowerFist::PowerFist(PowerFist const &a) : AWeapon(a) {}
PowerFist & PowerFist::operator=(PowerFist const &a)
{
	if (this != &a)
	{
		AWeapon::operator=(a);
	}
	return (*this);
}
PowerFist::~PowerFist() {}

void PowerFist::attack() const { std::cout << "* pschhh... SBAM! *" << std::endl; }
