#include "Squad.hpp"

Squad::Squad() : _count(0), _squad(0) {}

Squad::~Squad() {}

Squad::Squad(Squad const & a) {}

Squad & Squad::operator=(Squad const & a) { return (*this); }

int				Squad::getCount() const { return (_count); }

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n > _count)
		return (0);
	else
		return (_squad[n]);
}

bool			Squad::isExist(ISpaceMarine* unit) const
{
	for (int i = 0; i < _count; ++i)
	{
		if (_squad[i] == unit)
			return (true);
	}
	return (false);
}

int				Squad::push(ISpaceMarine* unit)
{
	if (unit == 0 || isExist(unit))
		return (_count);
	ISpaceMarine **new_squad = new ISpaceMarine*[_count + 1];	
	for (int i = 0; i < _count; ++i)
		new_squad[i] = _squad[i];
	new_squad[_count] = unit;
	delete [] _squad;
	_squad = new_squad;
	return (++_count);
}
