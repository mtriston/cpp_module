#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon &weapon) : _name(name), _weapon(weapon) {}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his ";
	std::cout << _weapon.getType() << std::endl;
}
