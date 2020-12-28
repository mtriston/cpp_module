#include "Phonebook.hpp"

int		main(void)
{
	std::string	command;
	Phonebook Phonebook;

//	std::cin >> command;
//	if (command == "EXIT")
//	{
//		std::cout << "Exit." << std::endl;
//		return (0);
//	}
	Phonebook.add();
	Phonebook.display();
	return (0);
}
