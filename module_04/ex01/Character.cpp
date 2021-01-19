#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(0) {}

Character::Character(Character const & a) : _name(a._name), _ap(a._ap), _weapon(a._weapon) {}

Character::~Character() {}

Character & Character::operator=(Character const &a )
{
	if (this != &a)
	{
		_name = a._name;
		_ap = a._ap;
		_weapon = a._weapon;
	}
	return (*this);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon* weapon) { _weapon = weapon; }

void Character::attack(Enemy* enemy)
{
	if (enemy && _weapon && _weapon->getAPCost() <= _ap)
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		_ap -= _weapon->getAPCost();
	}
}
std::string const & Character::getName() const { return (_name); }

int 				Character::getAP() const { return (_ap); }

AWeapon const & 	Character::getWeapon() const { return (*_weapon); };

bool				Character::isArmed() const { return (_weapon != 0); }

std::ostream & operator << (std::ostream &os, const Character &p)
{
	if (p.isArmed())
		return (os << p.getName() << " has " << p.getAP() << " AP and wields a " << p.getWeapon().getName() << std::endl);
	else
		return (os << p.getName() << " has " << p.getAP() << " AP and is unarmed" << std::endl);
}