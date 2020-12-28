#ifndef	CONTACT_CPP
# define CONTACT_CPP
# include <string>
# include <iostream>

class Contact {
	public:
		void		print();
		void		set_first_name(std::string value);
		void		set_last_name(std::string value);
		void		set_nickname(std::string value);
		void		set_login(std::string value);
		void		set_postal_address(std::string value);
		void		set_email_address(std::string value);
		void		set_phone_number(std::string value);
		void		set_birthday_date(std::string value);
		void		set_favorite_meal(std::string value);
		void		set_underwear_color(std::string value);
		void		set_darkest_secret(std::string value);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_login();
		std::string	get_postal_address();
		std::string	get_email_address();
		std::string	get_phone_number();
		std::string	get_birthday_date();
		std::string	get_favorite_meal();
		std::string	get_underwear_color();
		std::string	get_darkest_secret();
	
	private:
		std::string	_fields[11];	
		int			_size = 11;
};

#endif
