//
// Created by mtriston on 25.01.2021.
//

#include "Converter.hpp"

int main(int argc, char **argv) {
	if (argc == 2)
	{
		try {
			Converter c(argv[1]);
			c.print();
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			return (1);
		}
	}
	return (0);
}
