#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {}

Enemy::Enemy(Enemy const & a) : _hp(a._hp), _type(a._type) {}

Enemy & Enemy::operator=(Enemy const & a)
{
	if (this != &a)
	{
		_hp = a._hp;
		_type = a._type;
	}
	return (*this);
}

virtual ~Enemy() {}
std::string const & Enemy::getType() const { return (_type); }
int					Enemy::getHP() const { return (_name); }
virtual void		takeDamage(int amount)
{
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
	if (_hp == 0)
		Enemy::~Enemy();
}
