#include "Contact.hpp"

void	Contact::set_first_name(std::string first_name) { _first_name = first_name; }
void	Contact::set_last_name(std::string last_name) { _last_name = last_name; }
void	Contact::set_nickname(std::string nickname) { _nickname = nickname; }

std::string	Contact::get_first_name(void) { return _first_name; }
std::string	Contact::get_last_name(void) { return _last_name; }
std::string	Contact::get_nickname(void) { return _nickname; }
