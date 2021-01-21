#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	unsigned	_hitPoints;
	unsigned   	_maxHP;
	unsigned	_energyPoints;
	unsigned	_maxEP;
	unsigned	_level;
	unsigned	_meleeAttackDmg;
	unsigned	_rangedAttackDmg;
	unsigned	_armorReduction;
    std::string _name;

public:
	ClapTrap();
	ClapTrap
	(
		unsigned hitPoints, 
		unsigned maxHP, 
		unsigned energyPoints, 
		unsigned maxEP, 
		unsigned level, 
		unsigned meleeDmg, 
		unsigned rangedDmg, 
		unsigned armor,
		std::string const &name
		);
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &);
	ClapTrap & operator = (ClapTrap const &);
	virtual ~ClapTrap();

	void    rangedAttack(std::string const &target);
	void    meleeAttack(std::string const &target);
	void    takeDamage(unsigned int amount);
	void    beRepaired(unsigned int amount);
	std::string getName(void) const;
	unsigned	getHitPoints(void) const;
	unsigned	getMaxHP(void) const;
	unsigned	getEnergyPoints(void) const;
	unsigned	getMaxEP(void) const;
	unsigned	getLevel(void) const;
	unsigned	getMeleeAttackDmg(void) const;
	unsigned	getRangedAttackDmg(void) const;
	unsigned	getArmorReduction(void) const;

};

#endif
