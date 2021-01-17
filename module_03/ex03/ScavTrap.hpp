#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	void		(ScavTrap::*_challenges[5])();
	void		_riddle1();
	void		_riddle2();
	void		_riddle3();
	void		_riddle4();
	void		_riddle5();

public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &);
	ScavTrap & operator = (ScavTrap const &);
	~ScavTrap();

    void    challengeNewcomer(std::string const &target);
};

#endif
