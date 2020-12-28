#include "Phonebook.hpp"

int		main(void)
{
	std::string	command;
	Phonebook Phonebook;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
		{
			std::cout << "Add new contact!" << std::endl;
			Phonebook.add();
		}
		else if (command == "SEARCH")
			Phonebook.display();
	}
	return (0);
}
