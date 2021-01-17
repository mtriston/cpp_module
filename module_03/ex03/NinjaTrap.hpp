#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &);
	NinjaTrap & operator = (NinjaTrap const &);
	~NinjaTrap();

    void ninjaShoebox(ClapTrap &);
    void ninjaShoebox(FragTrap &);
    void ninjaShoebox(ScavTrap &);
    void ninjaShoebox(NinjaTrap &);

};

#endif
