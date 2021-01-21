//
// Created by mtriston on 21.01.2021.
//

#ifndef MODULE_04_GOOF_HPP
#define MODULE_04_GOOF_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Goof : public Victim
{
public:
	Goof(std::string const & name = "Goof");
	Goof(Goof const &);
	Goof & operator=(Goof const &);
	virtual ~Goof();
	void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, const Goof &p);

#endif //MODULE_04_GOOF_HPP
