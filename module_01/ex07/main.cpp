#include <fstream>
#include <iostream>

int	error(std::string msg)
{
	std::cout << "Error!" << std::endl;
	std::cout << msg << std::endl;
	return (1);
}

int main(int argc, char const *argv[])
{
	std::ifstream	src;
	std::ofstream	dst;
	std::string		buf;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
		return (error("Invalid count of arguments."));
	if (!*(argv[2]) || !*(argv[3]))
		return (error("Empty argument."));
	s1 = argv[2];
	s2 = argv[3];
	src.open(argv[1]);
	if (!src.is_open())
		return (error("The src file cannot be opened."));
	dst.open(std::string (argv[1]) + ".replace");
	if (!dst.is_open())
		return (error("The dst file cannot be opened."));
	do
	{
		if (buf.size() > 0)
			dst << ' ';
		if (buf == s1)
			dst << s2;
		else
			dst << buf;
	} while (src >> buf);
	src.close();
	dst.close();
	return 0;
}
