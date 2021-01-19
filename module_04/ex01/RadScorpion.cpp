#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & a) : Enemy(a)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion & RadScorpion::operator(RadScorpion const & a)
{
	if (this != &a)
	{
		_hp = a._hp;
		_type = a._type;
	}
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
