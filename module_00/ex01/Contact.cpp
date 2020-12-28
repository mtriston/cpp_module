#include "Contact.hpp"

void	    Contact::set_first_name(std::string value) { _fields[0] = value; }
void	    Contact::set_last_name(std::string value) { _fields[1] = value; }
void	    Contact::set_nickname(std::string value) { _fields[2] = value; }
void	    Contact::set_login(std::string value) { _fields[3] = value; }
void	    Contact::set_postal_address(std::string value) { _fields[4] = value; }
void	    Contact::set_email_address(std::string value) { _fields[5] = value; }
void	    Contact::set_phone_number(std::string value) { _fields[6] = value; }
void	    Contact::set_birthday_date(std::string value) { _fields[7] = value; }
void	    Contact::set_favorite_meal(std::string value) { _fields[8] = value; }
void	    Contact::set_underwear_color(std::string value) { _fields[9] = value; }
void	    Contact::set_darkest_secret(std::string value) { _fields[10] = value; }
std::string	Contact::get_first_name() { return _fields[0]; }
std::string	Contact::get_last_name() { return _fields[1]; }
std::string	Contact::get_nickname() { return _fields[2]; }
std::string	Contact::get_login()  { return _fields[3]; }
std::string	Contact::get_postal_address()  { return _fields[4]; }
std::string	Contact::get_email_address()  { return _fields[5]; }
std::string	Contact::get_phone_number()  { return _fields[6]; }
std::string	Contact::get_birthday_date()  { return _fields[7]; }
std::string	Contact::get_favorite_meal()  { return _fields[8]; }
std::string	Contact::get_underwear_color()  { return _fields[9]; }
std::string	Contact::get_darkest_secret()  { return _fields[10]; }
void        Contact::print() {
    for (int i = 0; i < _size; ++i)
	{
		std::cout << _fields[i] << std::endl;
	}
	std::cin.ignore();
}