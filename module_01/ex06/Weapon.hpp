#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
	std::string		_type;
public:
	Weapon(std::string type = "sword");
	std::string const &	getType();
	void				setType(std::string const & type);
};

#endif