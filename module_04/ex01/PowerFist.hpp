#pragma once
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &);
	PowerFist & operator=(PowerFist const &);
	virtual ~PowerFist();
	void attack() const;
};
