#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap();
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const &);
	SuperTrap &operator=(SuperTrap const &);
	~SuperTrap();	
};
#endif

