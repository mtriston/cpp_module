#include "Peon.hpp"

Peon::Peon(std::string const & name) : Victim(name) 
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & a) : Victim(a) 
{
	std::cout << "Zog zog." << std::endl;
}

Peon & Peon::operator=(Peon const & a)
{
	if (this != &a)
	{
    	std::cout << _name << " becomes like " << a._name << "!" << std::endl;
		_name = a._name;
	}
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator << (std::ostream &os, const Peon &p)
{
    return (os << "I am " << p.getName() << " and I like otters!" << std::endl);
}
