#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>

class Phonebook {
	public:
		Phonebook() { _counter = 0; }
		void			add();
		bool 			print_table();
		void			print_contact(int i);
		std::string		truncate(std::string str);
		
	private:
		int		_counter;
		Contact _Phonebook[8];
};

#endif
