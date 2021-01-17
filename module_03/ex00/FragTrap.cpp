#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _maxHP = 100;
    _energyPoints = 100;
    _maxEP = 100;
    _level = 1;
    _meleeAttackDmg = 30;
    _rangedAttackDmg = 20;
    _armorReduction = 5;
    _name = "FragTrap";
    _vaulthunter[0] = &FragTrap::_funzerker;
    _vaulthunter[1] = &FragTrap::_blightbot;
    _vaulthunter[2] = &FragTrap::_mechromagician;
    _vaulthunter[3] = &FragTrap::_miniontrap;
    _vaulthunter[4] = &FragTrap::_medbot;
    std::cout << "\033[1;33m" << _name << ": Hey everybody! Check out my package! (Default constructor)\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string const &name)
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
    _vaulthunter[0] = &FragTrap::_funzerker;
    _vaulthunter[1] = &FragTrap::_blightbot;
    _vaulthunter[2] = &FragTrap::_mechromagician;
    _vaulthunter[3] = &FragTrap::_miniontrap;
    _vaulthunter[4] = &FragTrap::_medbot;
    std::cout << "\033[1;33m" << _name << " : This time it'll be awesome, I promise! (Parametric constructor)\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &a)
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
    std::cout <<  "\033[1;33m" << _name << ": Recompiling my combat code! (Assignation operator)\033[0m" << std::endl;
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
    std::cout <<  "\033[1;33m" << _name << ": This time it'll be awesome, I promise! (Copy constructor)\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;31m" << _name << ": Argh arghargh death gurgle gurglegurgle urgh... death. (Destructor)\033[0m" << std::endl;
}

void    FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "\033[1;31m" << _name << " attacks " << target << " at range, causing ";
    std::cout << _rangedAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "\033[1;31m" << _name << " attacks " << target << " at melee, causing ";
    std::cout << _meleeAttackDmg << " points of damage!\033[0m" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
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
        this->~FragTrap();
    }
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "\033[1;32m(" << _hitPoints << " + " << amount << ") " << _name << ": ";
    _hitPoints += amount;
    if (_hitPoints > _maxHP)
    {
        _hitPoints = _maxHP;
    }
    std::cout << "Healsies! (now is " << _hitPoints << ")\033[0m" << std::endl;
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
