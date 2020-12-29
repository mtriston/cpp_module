#include "ZombieEvent.hpp"

int		main()
{
	ZombieEvent spawn;
	Zombie		*zombie;

	zombie = spawn.newZombie("Jack");
	zombie->announce();
	delete zombie;
	zombie = spawn.randomChump();
	return (0);
}
