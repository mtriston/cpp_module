#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <string>

class Phonebook {
	public:
		Phonebook() { _counter = 0; }
		int		get_counter(void);
		void	add(void);
		void	display(void);
		void	search(int i);
		
	private:
		int		_counter;
		Contact _Phonebook[8];
};

#endif
