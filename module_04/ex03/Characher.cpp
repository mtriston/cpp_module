//
// Created by mtriston on 20.01.2021.
//

#include "Characher.hpp"

Characher::Characher(std::string const & name)
{
	_name = name;
	_inventory = 0;
	_idx = 0;
}

Characher::Characher(Characher const & a)
{
	_name = a._name;
	_idx = a._idx;
	_inventory = new AMateria *[a._idx];
	for (int i = 0; i < a._idx; ++i)
		_inventory[i] = a._inventory[i]->clone();
}

Characher & Characher::operator=(Characher const & a)
{
	if (this != &a)
	{
		for (int i = 0; i < _idx; ++i)
			delete _inventory[i];
		delete [] _inventory;
		this->_inventory = new AMateria*[a._idx];
		for (int i = 0; i < a._idx; ++i)
			_inventory[i] = a._inventory[i]->clone();
		_idx = a._idx;
		_name = a._name;
	}
	return (*this);
}

Characher::~Characher()
{
	for (int i = 0; i < _idx; ++i)
		delete _inventory[i];
	delete [] _inventory;
}

std::string const & Characher::getName() { return _name; }

void 				Characher::equip(AMateria* m)
{
	if (_idx < _limit)
	{
		AMateria** temp = new AMateria*[_idx + 1];
		for (int i = 0; i < _idx; ++i)
			temp[i] = _inventory[i];
		temp[_idx] = m->clone();
		delete [] _inventory;
		_inventory = temp;
		++_idx;
	}
}

void 				Characher::unequip(int idx)
{
	if (idx >= 0 && idx <= _idx)
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

void 				Characher::use(int idx, ICharacter& target)
{
	target.use(idx, *this);
}