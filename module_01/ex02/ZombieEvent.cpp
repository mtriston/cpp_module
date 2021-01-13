#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string const &type) { _type = type; }

Zombie*	ZombieEvent::newZombie(std::string const &name) {
	
	return (new Zombie(_type, name));
}

Zombie*	ZombieEvent::randomChump()
{
	std::string	const pool[5] = {"Olivia", "Nia", "James", "Bull", "Chunky"};
	Zombie *zombie;
	zombie = new Zombie(_type, pool[std::rand() % 5]);
	zombie->announce();
	return (zombie);
}
