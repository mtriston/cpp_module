#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {}

void	Zombie::announce() {

	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiiinnssss..." << std::endl;
}
