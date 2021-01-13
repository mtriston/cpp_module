#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	_type = type;
	_name = name;
}

void	Zombie::set_random_name()
{
	static const char	abc[] = "abcdefghijklmnopqrstuvwxyz";
	int					len;
	std::string			word;

	len = rand() % 5 + 4;
	for (int i = 0; i < len; ++i)
	{
		word += abc[std::rand() % sizeof(abc) - 1];
	}
	set_name(word);
}

void	Zombie::set_name(std::string const &name)
{
	_name = name;
}

void	Zombie::set_type(std::string const &type)
{
	_type = type;
}

void	Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")";
	std::cout << "> Braiiiiiiiinnssss..." << std::endl;
}
