//
// Created by mtriston on 25.01.2021.
//

#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const std::string &str) : _str(str) {
	try {
		if (_str[0] == '\'' && _str.length() == 4 && _str[_str.length() - 1] == '\'')
			_value = static_cast<double>(_str[1]);
		else
			_value = std::stod(_str);
	} catch (std::exception &e) {
		throw InvalidArgumentException()
	}
}

Converter::Converter(const Converter &a) { *this = a; }

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &a) {
	(void) a;
	return (*this);
}

const char *Converter::ImpossibleConvertionException::what() const throw() { return ("impossible"); }

const char *Converter::NonDisplayableException::what() const throw() { return ("Non displayable"); }

const char *Converter::InvalidArgumentException::what() const throw() { return ("Invalid argument"); }

double Converter::printDouble() const {
	double num = std::stod(_str);
	return (num);
}

float Converter::printFloat() const {
	float num = std::stof(_str);
	return (num);
}

int Converter::printInt() const {
	if (_str.length() == 1 && !std::isdigit(_str[0]))
		return (static_cast<int>(_str[0]));
	int num;
	try {
		num = std::stoi(_str);
	} catch (std::exception &e) {
		throw ImpossibleConvertionException();
	}
	return (num);
}

char Converter::printChar() const {
	if (_str.length() == 1 && !std::isdigit(_str[0]))
		return (_str[0]);
	if (isPseudoLiteral())
		throw ImpossibleConvertionException();
	int i = toInt();
	if (i < -128 || i > 127)
		throw ImpossibleConvertionException();
	if (!std::isprint(i))
		throw NonDisplayableException();
	char c = static_cast<char>(i);
	return (c);
}