#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::SuperMutant(SuperMutant const & a) : Enemy(a)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant & SuperMutant::operator=(SuperMutant const & a)
{
	if (this != &a)
	{
		_hp = a._hp;
		_type = a._type;
	}
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
	Enemy::~Enemy();
}

void SuperMutant::takeDamage(int amount)
{
	if (amount > 3)
		Enemy::takeDamage(amount - 3);
}
