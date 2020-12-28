#include "Phonebook.hpp"

int		Phonebook::get_counter(void) { return _counter; }

void	Phonebook::add(void) {
	std::string temp;
	
	if (_counter == 8)
		std::cout << "Phonebook is full!" << std::endl;
	else
	{	std::cin.ignore(32767, '\n');	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_first_name(temp);
	}
}

void	Phonebook::display(void) {
	std::cout << _Phonebook[_counter].get_first_name() << std::endl;
}
