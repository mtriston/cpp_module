//
// Created by mtriston on 25.01.2021.
//
#include <string>
#include <cmath>
#include <iostream>

int main(int argc, char **argv) {
	if (argc != 2)
		return (1);
	std::string s = argv[1];
	/* check is it char */
	if (s.length() == 3 && s[0] == '\'' && s[s.length() - 1] == s[0])
		s = std::to_string(static_cast<int>(s[1]));
	/* print char */
	{
		int i;
		std::cout << "char: ";
		try {
			i = std::stoi(s);
			if (i < -128 || i > 127)
				std::cout << "impossible" << std::endl;
			else if (i < 32 || i > 126)
				std::cout << "not displayable" << std::endl;
			else
				std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
		} catch (std::exception &e) { std::cout << "impossible" << std::endl; }
	}
	/* print int */
	{
		int i;
		std::cout << "int: ";
		try {
			i = std::stoi(s);
			std::cout << i << std::endl;
		} catch (std::exception &e) { std::cout << "impossible" << std::endl; }
	}
	/* print float */
	{
		float f;
		std::cout << "float: ";
		try {
			f = std::stof(s);
			std::cout << f;
			if (!std::isnan(f) && !std::isinf(f) && f == std::floor(f))
				std::cout << ".0";
			std::cout << "f" << std::endl;
		} catch (std::exception &e) { std::cout << "impossible" << std::endl; }
	}
	/* print double */
	{
		double d;
		std::cout << "double: ";
		try {
			d = std::stod(s);
			std::cout << d;
			if (!std::isnan(d) && !std::isinf(d) && d == std::floor(d))
				std::cout << ".0";
			std::cout << std::endl;
		} catch (std::exception &e) { std::cout << "impossible" << std::endl; }
	}

	return (0);
}
