#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent {

	public:
		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump();

	private:
		std::string	_type;
		std::string	_pool[5] = {"Bob", "Spike", "Bull", "Michele", "Ann"};
};

#endif
