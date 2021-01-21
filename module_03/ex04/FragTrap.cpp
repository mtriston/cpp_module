#include "FragTrap.hpp"

FragTrap::FragTrap() :  ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, "FragTrap")
{
    this->_vaulthunter[0] = &FragTrap::_funzerker;
    this->_vaulthunter[1] = &FragTrap::_blightbot;
    this->_vaulthunter[2] = &FragTrap::_mechromagician;
    this->_vaulthunter[3] = &FragTrap::_miniontrap;
    this->_vaulthunter[4] = &FragTrap::_medbot;
    std::cout << "\033[1;33mFragTrap Default constructor\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
    this->_vaulthunter[0] = &FragTrap::_funzerker;
    this->_vaulthunter[1] = &FragTrap::_blightbot;
    this->_vaulthunter[2] = &FragTrap::_mechromagician;
    this->_vaulthunter[3] = &FragTrap::_miniontrap;
    this->_vaulthunter[4] = &FragTrap::_medbot;
    std::cout << "\033[1;33mFragTrap Parametric constructor\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &a)
{
    ClapTrap::operator=(a);
    std::cout <<  "\033[1;33mFragTrap Assignation operator\033[0m" << std::endl;
    return (*this);
}

FragTrap::FragTrap(FragTrap const &a)
{
    *this = a;
    this->_vaulthunter[0] = &FragTrap::_funzerker;
    this->_vaulthunter[1] = &FragTrap::_blightbot;
    this->_vaulthunter[2] = &FragTrap::_mechromagician;
    this->_vaulthunter[3] = &FragTrap::_miniontrap;
    this->_vaulthunter[4] = &FragTrap::_medbot;
    std::cout <<  "\033[1;33mFragTrap Copy constructor\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;31mFragTrap Destructor\033[0m" << std::endl;
}

void    FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FragTrap attacks: ";
    std::cout << "\033[1;31m" << _name << " attacks " << target << " at range, causing ";
    std::cout << _rangedAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FragTrap attacks: ";
    std::cout << "\033[1;31m" << _name << " attacks " << target << " at melee, causing ";
    std::cout << _meleeAttackDmg << " points of damage!\033[0m" << std::endl;
}

void	FragTrap::_funzerker()
{
    std::cout << "I'm a sexy dinosaur! Rawr!" << std::endl;
}

void	FragTrap::_blightbot()
{
    std::cout << "Aww, I should've drawn tattoos on you!" << std::endl;
}

void	FragTrap::_mechromagician()
{
    std::cout << "Anarchy and mini-trap and awesomeness, oh my!" << std::endl;
}

void	FragTrap::_miniontrap()
{
    std::cout << "100% more mini-trap turret!" << std::endl;
}

void	FragTrap::_medbot()
{
    std::cout << "Take these, gorgeous, you'll feel better!" << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (_energyPoints < 25)
        std::cout << "Not enouth energy points (now is " << _energyPoints << ")" << std::endl;
    else
    {
        _energyPoints -= 25;
        std::cout << "Loading combat packages!" << "\033[1;35m" << std::endl;

        std::cout << _name << " attacks " << target << " using vaulthunter_dot_exe!" << std::endl;

        (this->*_vaulthunter[std::rand() % 5])();

        std::cout << "\033[0m";
    }
}
