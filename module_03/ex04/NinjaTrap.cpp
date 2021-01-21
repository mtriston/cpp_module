#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap")
{
    std::cout << "\033[1;33mNinjaTrap default constructor was called\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) :  ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
    std::cout << "\033[1;33mNinjaTrap parametric constructor was called\033[0m" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &a)
{
    ClapTrap::operator=(a);
    std::cout << "\033[1;33mNinjaTrap assignation operator was called\033[0m" << std::endl;
    return (*this);
}

NinjaTrap::NinjaTrap(NinjaTrap const &a)
{
    *this = a;
    std::cout << "\033[1;33mNinjaTrap copy constructor was called\033[0m" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "\033[1;33mNinjaTrap destructor was called\033[0m" << std::endl;
}

void    NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap attacks: ";
    std::cout << "\033[1;31m" << this->_name << " attacks " << target << " at range, causing ";
    std::cout << this->_rangedAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap attacks: ";
    std::cout << "\033[1;31m" << this->_name << " attacks " << target << " at melee, causing ";
    std::cout << this->_meleeAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
    std::cout << "Doing Shoebox... It's ClapTrap!" << std::endl;
    this->rangedAttack(trap.getName());
    trap.takeDamage(_rangedAttackDmg);

}
void    NinjaTrap::ninjaShoebox(FragTrap &trap)
{
    std::cout << "Doing Shoebox... It's FragTrap! Bye-Bye!" << std::endl;
    this->meleeAttack(trap.getName());
    trap.takeDamage(_meleeAttackDmg);
    this->meleeAttack(trap.getName());
    trap.takeDamage(_meleeAttackDmg);

}
void    NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
    std::cout << "Doing Shoebox... It's ScavTrap!" << std::endl;
    this->meleeAttack(trap.getName());
    trap.takeDamage(_meleeAttackDmg);
}
void    NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
    std::cout << "Doing Shoebox... It's NinjaTrap!" << std::endl;
    this->rangedAttack(trap.getName());
    trap.takeDamage(_rangedAttackDmg);
    if (this == &trap)
    {
        std::cout << "Holy shit! It's me!" << std::endl;
        trap.beRepaired(_rangedAttackDmg);
    }
}
