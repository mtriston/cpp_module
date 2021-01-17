#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class ScavTrap
{
private:
	unsigned	_hitPoints;
	unsigned   	_maxHP;
	unsigned	_energyPoints;
	unsigned	_maxEP;
	unsigned	_level;
	unsigned	_meleeAttackDmg;
	unsigned	_rangedAttackDmg;
	unsigned	_armorReduction;
	std::string	_name;
	void		(ScavTrap::*_challenges[5])();
	void		_riddle1();
	void		_riddle2();
	void		_riddle3();
	void		_riddle4();
	void		_riddle5();

public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &);
	ScavTrap & operator = (ScavTrap const &);
	~ScavTrap();

	void    rangedAttack(std::string const &target);
	void    meleeAttack(std::string const &target);
	void    takeDamage(unsigned int amount);
	void    beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const &target);
};

#endif
