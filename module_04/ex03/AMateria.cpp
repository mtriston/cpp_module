//
// Created by mtriston on 20.01.2021.
//

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const & a) : _type(a._type), _xp(a._xp) {}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(AMateria const & a)
{
	if (this != &a)
	{
		_xp = a._xp;
		_type = a._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const { return _type; }

unsigned int AMateria::getXP() const { return _xp; }

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}
