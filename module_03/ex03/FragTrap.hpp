#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	void		(FragTrap::*_vaulthunter[5])();
	void		_funzerker();
	void		_blightbot();
	void		_mechromagician();
	void		_miniontrap();
	void		_medbot();

public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &);
	FragTrap & operator = (FragTrap const &);
	~FragTrap();

	void    vaulthunter_dot_exe(std::string const &target);
};

#endif
