#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int				_count;
		ISpaceMarine**	_squad;
		bool			isExist(ISpaceMarine*) const;
	public:
		Squad();
		Squad(Squad const &);
		~Squad();
		Squad & operator=(Squad const &);

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);
};

#endif
