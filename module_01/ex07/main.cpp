#include <fstream>
#include <iostream>

int main(int argc, char const *argv[])
{
	std::ofstream src;
	std::ofstream dst;
	if (argc != 4)
	{
		std::cout << "Error\nInvalid count of arguments" << std::endl;
	}
	src.open(argv[1]);
	


	return 0;
}
