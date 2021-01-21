#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHP = 100;
    this->_energyPoints = 100;
    this->_maxEP = 100;
    this->_level = 1;
    this->_meleeAttackDmg = 30;
    this->_rangedAttackDmg = 20;
    this->_armorReduction = 5;
    this->_name = "ClapTrap";
    std::cout << "\033[1;33m(ClapTrap Default constructor)\033[0m" << std::endl;
}
ClapTrap::ClapTrap
(
    unsigned hitPoints, unsigned maxHP, 
    unsigned energyPoints, unsigned maxEP, 
    unsigned level, unsigned meleeDmg, 
    unsigned rangedDmg, unsigned armor,
   std::string const &name
) : _hitPoints(hitPoints),  _maxHP(maxHP),  _energyPoints(energyPoints), 
    _maxEP(maxEP), _level(level), _meleeAttackDmg(meleeDmg), 
    _rangedAttackDmg(rangedDmg), _armorReduction(armor),_name(name)
    {
        std::cout << "\033[1;33mClapTrap Parametric constructor\033[0m" << std::endl;
    }

ClapTrap::ClapTrap(std::string const &name)
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
    std::cout << "\033[1;33m(ClapTrap Parametric constructor)\033[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &a)
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

std::string ClapTrap::getName(void) const
{
    return (_name);
}

unsigned	ClapTrap::getHitPoints(void) const { return (_hitPoints); }
unsigned	ClapTrap::getMaxHP(void) const { return (_maxHP); }
unsigned	ClapTrap::getEnergyPoints(void) const { return (_energyPoints); }
unsigned	ClapTrap::getMaxEP(void) const { return (_maxEP); }
unsigned	ClapTrap::getLevel(void) const { return (_level); }
unsigned	ClapTrap::getMeleeAttackDmg(void) const { return (_meleeAttackDmg); }
unsigned	ClapTrap::getRangedAttackDmg(void) const { return (_rangedAttackDmg); }
unsigned	ClapTrap::getArmorReduction(void) const { return (_armorReduction); }
