#pragma once
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	RadScorpion & operator=(RadScorpion const &);
	~RadScorpion();
};
