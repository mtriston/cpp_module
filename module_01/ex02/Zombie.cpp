#include "Zombie.hpp"

Zombie::Zombie(std::string const &type, std::string const &name) : _type(type), _name(name) {}

void	Zombie::announce() {

	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiiinnssss..." << std::endl;
}
