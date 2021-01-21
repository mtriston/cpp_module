//
// Created by mtriston on 20.01.2021.
//

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &);
	Ice &operator=(Ice const &);
	void use(ICharacter& target);
	AMateria* clone() const;
};


#endif //MODULE_04_ICE_HPP
