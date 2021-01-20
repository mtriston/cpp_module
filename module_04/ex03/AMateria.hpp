//
// Created by mtriston on 20.01.2021.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
protected:
	std::string		_type;
	unsigned int	_xp;
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &);
	AMateria & operator=(AMateria const &);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //MODULE_04_AMATERIA_HPP
