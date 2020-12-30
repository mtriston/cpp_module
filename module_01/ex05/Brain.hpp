#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <sstream>

class Brain
{
private:
	int	_iq;
public:
	Brain(int iq = 100);
	std::string identify();
};

#endif