//
// Created by mtriston on 20.01.2021.
//

#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
	_inventory = 0;
	_idx = 0;
}

Character::Character(Character const & a)
{
	_name = a._name;
	_idx = a._idx;
	_inventory = new AMateria *[a._idx];
	for (int i = 0; i < a._idx; ++i)
		_inventory[i] = a._inventory[i]->clone();
}

Character & Character::operator=(Character const & a)
{
	if (this != &a)
	{
		if (_inventory != 0)
		{
			for (int i = 0; i < _idx; ++i)
				delete _inventory[i];
			delete [] _inventory;
		}
		if (a._idx > 0)
		{
			_inventory = new AMateria*[a._idx];
			for (int i = 0; i < a._idx; ++i)
				_inventory[i] = a._inventory[i]->clone();
		}
		else
		{
			_inventory = 0;
		}
		_idx = a._idx;
		_name = a._name;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < _idx; ++i)
		delete _inventory[i];
	delete [] _inventory;
}

std::string const & Character::getName() const { return _name; }

void 				Character::equip(AMateria* m)
{
	if (_idx < _limit && m != 0)
	{
		AMateria** temp = new AMateria*[_idx + 1];
		for (int i = 0; i < _idx; ++i)
			temp[i] = _inventory[i];
		temp[_idx] = m;
		delete [] _inventory;
		_inventory = temp;
		++_idx;
	}
}

void 				Character::unequip(int idx)
{
	if (idx >= 0 && idx < _idx)
	{
		AMateria **temp = new AMateria*[_idx - 1];
		for (int i = 0; i < _idx; ++i)
		{
			if (i != idx)
				temp[i] = _inventory[i];
		}
		delete [] _inventory;
		_inventory = temp;
		--_idx;
	}
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx < _idx && idx >= 0)
		_inventory[idx]->use(target);
}