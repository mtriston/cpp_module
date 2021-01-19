#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & a) : _name(a._name), _title(a._title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & a)
{
	if (this != &a)
	{
    	std::cout << _name << ", " << _title << ", becomes like " << a._name << ", " << a._title << "!" << std::endl;
		_name = a._name;
		_title = a._title;
	}
	return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();	
}

std::string const & Sorcerer::getName() const { return (_name); }

std::string const & Sorcerer::getTitle() const { return (_title); }

std::ostream & operator << (std::ostream &os, const Sorcerer &p)
{
    return (os << "I am " << p.getName() << ", " << p.getTitle() << ", and I like ponies!" << std::endl);
}
