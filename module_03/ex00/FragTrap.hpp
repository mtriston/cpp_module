#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class FragTrap
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
	void		(FragTrap::*_vaulthunter[5])();
	void		_funzerker();
	void		_blightbot();
	void		_mechromagician();
	void		_miniontrap();
	void		_medbot();

public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &);
	FragTrap & operator = (FragTrap const &);
	~FragTrap();

	void    rangedAttack(std::string const &target);
	void    meleeAttack(std::string const &target);
	void    takeDamage(unsigned int amount);
	void    beRepaired(unsigned int amount);
	void    vaulthunter_dot_exe(std::string const &target);
};

#endif
