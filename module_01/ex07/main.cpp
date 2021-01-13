#include <fstream>
#include <iostream>

static int	error(std::string msg) {

	std::cout << "Error!" << std::endl;
	std::cout << msg << std::endl;
	return (1);
}

int main(int argc, char const *argv[]) {

	std::ifstream	src;
	std::ofstream	dst;
	std::string		dst_name;
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
	dst_name = std::string (argv[1]) + std::string (".replace");
	dst.open(dst_name.c_str());
	if (!dst.is_open())
		return (error("The dst file cannot be opened."));
	while (getline(src, buf)) {
		
		size_t pos;
		while (true)
		{
			pos = buf.find(s1);
			if (pos == std::string::npos)
				break;
			buf.replace(pos, s1.length(), s2);
		}
		dst << buf << std::endl;
	}
	src.close();
	dst.close();
	return 0;
}
