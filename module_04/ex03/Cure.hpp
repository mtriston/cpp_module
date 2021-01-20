//
// Created by mtriston on 20.01.2021.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &);
	Cure &operator=(Cure const &);
	void use(ICharacter& target);
};


#endif //MODULE_04_CURE_HPP
