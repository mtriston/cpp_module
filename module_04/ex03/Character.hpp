//
// Created by mtriston on 20.01.2021.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string			_name;
	AMateria**			_inventory;
	int 				_idx;
	static const int	_limit = 4;
public:
	Character(std::string const & name = "Noname");
	Character(Character const &);
	Character &operator=(Character const &);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //MODULE_04_CHARACHER_HPP
