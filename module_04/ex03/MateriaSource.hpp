//
// Created by mtriston on 20.01.2021.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria**			_inventory;
	int 				_idx;
	static const int	_limit = 4;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	~MateriaSource();
	MateriaSource & operator=(MateriaSource const &);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

};

#endif
