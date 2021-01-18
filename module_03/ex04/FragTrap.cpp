#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHP = 100;
    this->_energyPoints = 100;
    this->_maxEP = 100;
    this->_level = 1;
    this->_meleeAttackDmg = 30;
    this->_rangedAttackDmg = 20;
    this->_armorReduction = 5;
    this->_name = "FragTrap";
    _vaulthunter[0] = &FragTrap::_funzerker;
    _vaulthunter[1] = &FragTrap::_blightbot;
    _vaulthunter[2] = &FragTrap::_mechromagician;
    _vaulthunter[3] = &FragTrap::_miniontrap;
    _vaulthunter[4] = &FragTrap::_medbot;
    std::cout << "\033[1;33mFragTrap Default constructor\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_maxHP = 100;
    this->_energyPoints = 100;
    this->_maxEP = 100;
    this->_level = 1;
    this->_meleeAttackDmg = 30;
    this->_rangedAttackDmg = 20;
    this->_armorReduction = 5;
    this->_name = name;
    _vaulthunter[0] = &FragTrap::_funzerker;
    _vaulthunter[1] = &FragTrap::_blightbot;
    _vaulthunter[2] = &FragTrap::_mechromagician;
    _vaulthunter[3] = &FragTrap::_miniontrap;
    _vaulthunter[4] = &FragTrap::_medbot;
    std::cout << "\033[1;33mFragTrap Parametric constructor\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &a)
{
    this->_hitPoints = a._hitPoints;
    this->_maxHP = a._maxHP;
    this->_energyPoints = a._energyPoints;
    this->_maxEP = a._maxEP;
    this->_level = a._level;
    this->_meleeAttackDmg = a._meleeAttackDmg;
    this->_rangedAttackDmg = a._rangedAttackDmg;
    this->_armorReduction = a._armorReduction;
    this->_name = a._name;
    std::cout <<  "\033[1;33mFragTrap Assignation operator\033[0m" << std::endl;
    return (*this);
}

FragTrap::FragTrap(FragTrap const &a)
{
    *this = a;
    _vaulthunter[0] = &FragTrap::_funzerker;
    _vaulthunter[1] = &FragTrap::_blightbot;
    _vaulthunter[2] = &FragTrap::_mechromagician;
    _vaulthunter[3] = &FragTrap::_miniontrap;
    _vaulthunter[4] = &FragTrap::_medbot;
    std::cout <<  "\033[1;33mFragTrap Copy constructor\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;31mFragTrap Destructor\033[0m" << std::endl;
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
