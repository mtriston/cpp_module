#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, "SuperTrap"), FragTrap(), NinjaTrap()
{
	std::cout << "SuperTrap default constructor was called" << std::endl;
}

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name)
{
	std::cout << "SuperTrap parametric constructor was called" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &a)
{
    FragTrap::operator=(a);
    NinjaTrap::operator=(a);
    std::cout <<  "\033[1;33mSuperTrap Assignation operator was called\033[0m" << std::endl;
    return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor was called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &a) : ClapTrap(a), FragTrap(a), NinjaTrap(a)
{
	*this = a;
	std::cout << "SuperTrap copy constructor was called" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}
void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}
