//
// Created by mtriston on 25.01.2021.
//

#ifndef MODULE_06_CONVERTER_HPP
#define MODULE_06_CONVERTER_HPP
#include <string>
#include <cmath>
#include <iostream>
#include <limits>

class Converter {
private:
	std::string _str;
	double 		_value;

	Converter();
	Converter &operator=(Converter const &);
	Converter(Converter const &);
public:
	Converter(std::string const &str);
	~Converter();

	char printChar() const;
	int printInt() const;
	float printFloat() const;
	double printDouble() const;

	class ImpossibleConvertionException : public std::exception {
	public:
		const char *what() const throw();
	};

	class NonDisplayableException : public std::exception {
	public:
		const char *what() const throw();
	};

	class InvalidArgumentException : public std::exception {
	public:
		const char *what() const throw();
	};
};


#endif //MODULE_06_CONVERTER_HPP
