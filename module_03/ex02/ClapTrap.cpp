#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _hitPoints = 100;
    _maxHP = 100;
    _energyPoints = 100;
    _maxEP = 100;
    _level = 1;
    _meleeAttackDmg = 30;
    _rangedAttackDmg = 20;
    _armorReduction = 5;
    _name = "ClapTrap";
    std::cout << "\033[1;33m(ClapTrap Default constructor)\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
{
    _hitPoints = 100;
    _maxHP = 100;
    _energyPoints = 100;
    _maxEP = 100;
    _level = 1;
    _meleeAttackDmg = 30;
    _rangedAttackDmg = 20;
    _armorReduction = 5;
    _name = name;
    std::cout << "\033[1;33m(ClapTrap Parametric constructor)\033[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &a)
{
    _hitPoints = a._hitPoints;
    _maxHP = a._maxHP;
    _energyPoints = a._energyPoints;
    _maxEP = a._maxEP;
    _level = a._level;
    _meleeAttackDmg = a._meleeAttackDmg;
    _rangedAttackDmg = a._rangedAttackDmg;
    _armorReduction = a._armorReduction;
    _name = a._name;
    std::cout <<  "\033[1;33m(ClapTrap Assignation operator)\033[0m" << std::endl;
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &a)
{
    *this = a;
    std::cout <<  "\033[1;33m(ClapTrap Copy constructor)\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[1;31m(ClapTrap Destructor)\033[0m" << std::endl;
}

void    ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "\033[1;31m" << _name << " attacks " << target << " at range, causing ";
    std::cout << _rangedAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "\033[1;31m" << _name << " attacks " << target << " at melee, causing ";
    std::cout << _meleeAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "\033[1;31m(" << _hitPoints << " - " << amount << ") " << _name << ": ";
    if (amount <= _armorReduction)
        std::cout << "Block! Try once more!";
    else
    {
        if (amount > _hitPoints + _armorReduction)
            _hitPoints = 0;
        else
            _hitPoints += _armorReduction - amount;
        std::cout << "Why do I even feel pain?!";
    }
    std::cout << "(now is " << _hitPoints << ")\033[0m" << std::endl;
    if (_hitPoints == 0)
    {
        this->~ClapTrap();
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "\033[1;32m(" << _hitPoints << " + " << amount << ") " << _name << ": ";
    _hitPoints += amount;
    if (_hitPoints > _maxHP)
    {
        _hitPoints = _maxHP;
    }
    std::cout << "Healsies! (now is " << _hitPoints << ")\033[0m" << std::endl;
}
