#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
    _hitPoints = 60;
    _maxHP = 60;
    _energyPoints = 120;
    _maxEP = 120;
    _meleeAttackDmg = 60;
    _rangedAttackDmg = 5;
    _armorReduction = 0;
    _name = "NinjaTrap";
    std::cout << "\033[1;33mNinjaTrap default constructor was called\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
    _hitPoints = 60;
    _maxHP = 60;
    _energyPoints = 120;
    _maxEP = 120;
    _meleeAttackDmg = 60;
    _rangedAttackDmg = 5;
    _armorReduction = 0;
    _name = name;
    std::cout << "\033[1;33mNinjaTrap parametric constructor was called\033[0m" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &a)
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
