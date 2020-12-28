#ifndef	CONTACT_CPP
# define CONTACT_CPP
# include <string>

class Contact {
	public:
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nickname(std::string nickname);

		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
	
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_address;
		std::string	_email_address;
		std::string	_phone_number;
		std::string	_birthday_date;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;
};

#endif
