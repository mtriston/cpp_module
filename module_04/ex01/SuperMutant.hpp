#pragma once
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	SuperMutant & operator=(SuperMutant const &);
	virtual ~SuperMutant();
	void takeDamage(int);
};
