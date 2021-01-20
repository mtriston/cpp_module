//
// Created by mtriston on 20.01.2021.
//

#ifndef CHARACHER_HPP
#define CHARACHER_HPP
#include "ICharacter.hpp"

class Characher : public ICharacter
{
private:
	std::string			_name;
	AMateria**			_inventory;
	int 				_idx;
	static const int	_limit = 4;
public:
	Characher(std::string const & name = "Noname");
	Characher(Characher const &);
	Characher &operator=(Characher const &);
	~Characher();
	std::string const & getName();
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //MODULE_04_CHARACHER_HPP
