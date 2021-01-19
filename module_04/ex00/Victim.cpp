#include "Victim.hpp"

Victim::Victim(std::string const & name) : _name(name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & a) : _name(a._name)
{
    std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim & Victim::operator=(Victim const & a)
{
	if (this != &a)
	{
    	std::cout << _name << " becomes like " << a._name << "!" << std::endl;
		_name = a._name;
	}
	return (*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string const & Victim::getName() const { return (_name); }

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator << (std::ostream &os, const Victim &p)
{
    return (os << "I am " << p.getName() << " and I like otters!" << std::endl);
}
