#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony {
	public:
		Pony(std::string name = "Anonymous");
		~Pony();
		void	say();
	private:
		std::string		_name;
};

#endif
