#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	_n = n;
	_Horde = new Zombie[n];
	for (int i = 0; i < n; ++i)
	{
		_Horde[i].set_random_name();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _Horde;
	std::cout << "Horde is destructed!" << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < _n; ++i)
	{
		_Horde[i].announce();
	}
}
