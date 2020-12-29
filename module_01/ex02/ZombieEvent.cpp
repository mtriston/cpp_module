#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type) { _type = type; }

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(_type, name));
}

Zombie*	ZombieEvent::randomChump()
{
	Zombie *zombie;
	zombie = new Zombie(_type, _pool[std::rand() % 5]);
	zombie->announce();
	return (zombie);
}
