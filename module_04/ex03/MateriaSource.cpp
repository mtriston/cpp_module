//
// Created by mtriston on 20.01.2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _inventory(0), _idx(0) {}

MateriaSource::MateriaSource(MateriaSource const & a)
{
	_idx = a._idx;
	_inventory = new AMateria *[a._idx];
	for (int i = 0; i < a._idx; ++i)
		_inventory[i] = a._inventory[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _idx; ++i)
		delete _inventory[i];
	delete [] _inventory;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & a)
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
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (_idx < _limit && materia != 0)
	{
		AMateria** temp = new AMateria*[_idx + 1];
		for (int i = 0; i < _idx; ++i)
			temp[i] = _inventory[i];
		temp[_idx] = materia;
		delete [] _inventory;
		_inventory = temp;
		++_idx;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _idx; ++i)
	{
		if (type == _inventory[i]->getType())
			return (_inventory[i]->clone());
	}
	return (0);
}