#include "Phonebook.hpp"

void	Phonebook::add() {
	std::string temp;
	
	if (_counter == 8)
		std::cout << "Phonebook is full!" << std::endl;
	else
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_first_name(temp);
		std::cout << "Enter last name: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_last_name(temp);
		std::cout << "Enter nickname: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_nickname(temp);
		std::cout << "Enter login: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_login(temp);
		std::cout << "Enter postal address: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_postal_address(temp);
		std::cout << "Enter email address: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_email_address(temp);
		std::cout << "Enter phone_number: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_phone_number(temp);
		std::cout << "Enter birthday date: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_birthday_date(temp);
		std::cout << "Enter favorite meal: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_favorite_meal(temp);
		std::cout << "Enter underwear color: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_underwear_color(temp);
		std::cout << "Enter darkest secret: ";	
		std::getline(std::cin, temp);
		_Phonebook[_counter].set_darkest_secret(temp);
		++_counter;
	}
}

std::string		Phonebook::truncate(std::string str) {
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	return str;
}

bool			Phonebook::print_table() {
	
	if (_counter == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return false;
	}
	for (int i = 0; i < _counter; ++i)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(_Phonebook[i].get_first_name()) << "|";
		std::cout << std::setw(10) << truncate(_Phonebook[i].get_last_name()) << "|";
		std::cout << std::setw(10) << truncate(_Phonebook[i].get_nickname()) << "|" << std::endl;
	}
	return true;
}

void	Phonebook::print_contact(int i) {
	if (i >= _counter || i < 0)
	{
		std::cout << "Invalid index!" << std::endl;
		std::cin.ignore();
	}
	else
		_Phonebook[i].print();
}

