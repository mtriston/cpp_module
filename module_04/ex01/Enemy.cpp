#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {}

Enemy::Enemy(Enemy const & a) : _hp(a._hp), _type(a._type) {}

Enemy::~Enemy() {}

Enemy & Enemy::operator=(Enemy const & a)
{
	if (this != &a)
	{
		_hp = a._hp;
		_type = a._type;
	}
	return (*this);
}


std::string const & Enemy::getType() const { return (_type); }

int					Enemy::getHP() const { return (_hp); }

void				Enemy::takeDamage(int amount)
{
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}
