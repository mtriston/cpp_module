#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const &);
	SuperTrap &operator=(SuperTrap const &);
	~SuperTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};
#endif

