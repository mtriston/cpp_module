//
// Created by mtriston on 22.01.2021.
//

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("a", 150);
		std::cout << a;
		std::cout << "Try to decrement 150 grade\n";
		a.decGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b("b", 1);
		std::cout << b;
		std::cout << "Try to increment 1 grade\n";
		b.incGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Try to create with 0 grade\n";
		Bureaucrat c("c", 0);
		std::cout << c;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "Try to create with 151 grade\n";
		Bureaucrat d("d", 151);
		std::cout << d;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}