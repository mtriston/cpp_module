//
// Created by mtriston on 20.01.2021.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const & a) : AMateria(a) {}

Cure & Cure::operator=(Cure const & a)
{
	if (this != &a)
	{
		_xp = a._xp;
		_type = a._type;
	}
	return (*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}