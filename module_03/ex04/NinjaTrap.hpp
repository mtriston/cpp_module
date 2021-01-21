#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &);
	NinjaTrap & operator = (NinjaTrap const &);
	virtual ~NinjaTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
    void ninjaShoebox(ClapTrap &);
    void ninjaShoebox(FragTrap &);
    void ninjaShoebox(ScavTrap &);
    void ninjaShoebox(NinjaTrap &);

};

#endif
