#include "Phonebook.hpp"
#include <stdexcept>

int		main()
{
	std::string	command;
	Phonebook	Phonebook;
	std::string	index;
	int 		i;

	while (command != "EXIT")
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			Phonebook.add();
		else if (command == "SEARCH")
		{
			if (Phonebook.print_table())
			{
				std::cout << "Enter index: ";
				std::cin >> index;
				try {
					i = std::stoi(index);
				}
				catch (std::exception& e) {
					std::cerr << "Invalid index!" << std::endl;
					std::cin.ignore();
					continue;
				}
				Phonebook.print_contact(i);
			}
		}
	}
	return (0);
}
