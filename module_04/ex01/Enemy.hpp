#pragma once
#include <string>
#include <iostream>

class Enemy
{
private:
	int _hp;
	std::string _type;
public:
	Enemy(int hp = 0, std::string const & type = "common");
	Enemy(Enemy const &);
	Enemy & operator=(Enemy const &);
	virtual ~Enemy();
	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};
