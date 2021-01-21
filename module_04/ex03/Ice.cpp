//
// Created by mtriston on 20.01.2021.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const & a) : AMateria(a) {}

Ice	& Ice::operator=(Ice const & a)
{
	if (this != &a)
	{
		_xp = a._xp;
		_type = a._type;
	}
	return (*this);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const { return (new Ice(*this)); }
