#include "ZombieEvent.hpp"

int		main()
{
	ZombieEvent spawn;
	Zombie		*zombie;

	spawn.setZombieType("Deadly");
	zombie = spawn.newZombie("Jack");
	zombie->announce();
	delete zombie;
	zombie = spawn.randomChump();
	delete zombie;
	return (0);
}
