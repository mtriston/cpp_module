//
// Created by mtriston on 20.01.2021.
//

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp(0), _type(type) {}

AMateria::AMateria(AMateria const & a) : _xp(a._xp), _type(a._type) {}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(AMateria const & a)
{
	if (this != &a)
	{
		_xp = a._xp;
		_type = a._type;
	}
}

std::string const & AMateria::getType() const { return _type; }

unsigned int AMateria::getXP() const { return _xp; }

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}