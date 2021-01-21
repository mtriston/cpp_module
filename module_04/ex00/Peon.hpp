#ifndef PEON_HPP
# define PEON_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(std::string const & name = "Peon");
    Peon(Peon const &);
    Peon & operator=(Peon const &);
	virtual ~Peon();
    void getPolymorphed() const;
};

std::ostream & operator << (std::ostream &os, const Peon &p);

#endif
