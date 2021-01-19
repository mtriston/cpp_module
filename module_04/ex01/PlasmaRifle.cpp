#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::PlasmaRifle(PlasmaRifle const &a) : AWeapon(a) {}
PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &a)
{
	if (this != &a)
	{
		AWeapon::operator=(a);
	}
	return (*this);
}
PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const { std::cout << "* piouuu piouuu piouuu *" << std::endl; }
