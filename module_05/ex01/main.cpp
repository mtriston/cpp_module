//
// Created by mtriston on 22.01.2021.
//

#include "Bureaucrat.hpp"

int main() {
	std::cout << "---------------------------------------" << std::endl;
	try {
		Bureaucrat a("a", 150);
		std::cout << a << std::endl;
		std::cout << "Try to decrement 150 grade\n";
		a.decGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		Bureaucrat b("b", 1);
		std::cout << b << std::endl;
		std::cout << "Try to increment 1 grade\n";
		b.incGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to create with 0 grade\n";
		Bureaucrat c("c", 0);
		std::cout << c << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to create with 151 grade\n";
		Bureaucrat d("d", 151);
		std::cout << d << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to create form with so high grade\n";
		Form f("form", 0, 1);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to create form with so low grade\n";
		Form f("form", 150, 151);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Success sign\n";
		Bureaucrat b("bureaucrat", 50);
		Form f("form", 100, 100);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Success sign using form's method\n";
		Bureaucrat b("bureaucrat", 50);
		Form f("form", 100, 100);
		std::cout << f << std::endl;
		f.beSigned(b);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign one form twice\n";
		Bureaucrat b("bureaucrat", 50);
		Form f("form", 100, 100);
		b.signForm(f);
		b.signForm(f);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign with low grade using bureucrat's method\n";
		Bureaucrat b("bureaucrat", 50);
		Form f("form", 10, 100);
		b.signForm(f);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign with low grade using form's method\n";
		Bureaucrat b("bureaucrat", 50);
		Form f("form", 10, 100);
		f.beSigned(b);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
}