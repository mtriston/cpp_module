#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::PlasmaRifle(AWeapon const &a) : AWeapon(a) {}
PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &a)
{
	if (this != &a)
	{
		AWeapon::operator=(a);
	}
	return (*this);
}
PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() { std::cout << "* piouuu piouuu piouuu *" << std:endl; }
