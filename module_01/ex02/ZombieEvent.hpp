#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent {

	public:
		void		setZombieType(std::string const &type);
		Zombie		*newZombie(std::string const &name);
		Zombie		*randomChump();

	private:
		std::string	_type;
};

#endif
