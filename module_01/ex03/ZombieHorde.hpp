#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieHorde
{
	public:
		ZombieHorde(int);
		~ZombieHorde();
		void	announce();
	private:
		int		_n;
		Zombie*	_Horde;
};

#endif

