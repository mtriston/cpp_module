#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int 		_ap;
	AWeapon*	_weapon;
public:
	Character(std::string const & name = "Character");
	Character(Character const &);
	~Character();
	Character & operator=(Character const &);
	void recoverAP();
	void equip(AWeapon*);
	bool isArmed() const;
	void attack(Enemy*);
	std::string const & getName() const;
	int 				getAP() const;
	AWeapon const & getWeapon() const;
};

std::ostream & operator << (std::ostream &os, const Character &p);

#endif
