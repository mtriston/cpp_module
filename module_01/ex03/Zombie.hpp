#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {

	public:
		Zombie(std::string type = "Deadly", std::string name = "Zombie");
		void	set_type(std::string const &type);
		void	set_name(std::string const &name);
		void	set_random_name();
		void	announce();

	private:
		std::string _type;
		std::string _name;
};

#endif
