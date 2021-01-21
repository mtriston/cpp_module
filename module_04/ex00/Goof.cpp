//
// Created by mtriston on 21.01.2021.
//

#include "Goof.hpp"

Goof::Goof(std::string const & name) : Victim(name)
{
	std::cout << "What's up?" << std::endl;
}

Goof::Goof(Goof const & a) : Victim(a)
{
	std::cout << "What's up?" << std::endl;
}

Goof & Goof::operator=(Goof const & a)
{
	if (this != &a)
	{
		std::cout << _name << " becomes like " << a._name << "!" << std::endl;
		_name = a._name;
	}
	return (*this);
}

Goof::~Goof()
{
	std::cout << "Holy sh*t!..." << std::endl;
}

void Goof::getPolymorphed() const
{
	std::cout << _name << " has been turned into a tree!" << std::endl;
}

std::ostream & operator << (std::ostream &os, const Goof &p)
{
	return (os << "I am " << p.getName() << " and I like otters!" << std::endl);
}
