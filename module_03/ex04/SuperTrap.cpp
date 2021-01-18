#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	_hitPoints = FragTrap::_hitPoints;
	_maxHP = FragTrap::_maxHP;
	_energyPoints = NinjaTrap::_energyPoints;
    _maxEP = NinjaTrap::_maxEP;
    _meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    _rangedAttackDmg = FragTrap::_rangedAttackDmg;
    _armorReduction = FragTrap::_armorReduction;
    _name = "SuperTrap";
	std::cout << "SuperTrap default constructor was called" << std::endl;
	std::cout << _rangedAttackDmg << std::endl;
}

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) 
{
	_hitPoints = FragTrap::_hitPoints;
	_maxHP = FragTrap::_maxHP;
	_energyPoints = NinjaTrap::_energyPoints;
    _maxEP = NinjaTrap::_maxEP;
    _meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    _rangedAttackDmg = FragTrap::_rangedAttackDmg;
    _armorReduction = FragTrap::_armorReduction;
    _name = name;
	std::cout << "SuperTrap parametric constructor was called" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &a)
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
    std::cout <<  "\033[1;33mSuperTrap Assignation operator was called\033[0m" << std::endl;
    return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor was called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &a)
{
	*this = a;
	std::cout << "SuperTrap copy constructor was called" << std::endl;
}
