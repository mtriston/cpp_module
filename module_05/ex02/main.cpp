//
// Created by mtriston on 22.01.2021.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		std::cout << "Try to create presidential form\n";
		PresidentialPardonForm f("Navalny");
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to create Robotomy form\n";
		RobotomyRequestForm f("taxi");
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to create shrubbery creation form\n";
		ShrubberyCreationForm f("park");
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign shrubbery reation form with low grade with bureaucrat method\n";
		ShrubberyCreationForm f("park");
		Bureaucrat b("b", 150);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign shrubbery reation form with low grade with form method\n";
		ShrubberyCreationForm f("park");
		Bureaucrat b("b", 150);
		f.beSigned(b);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign presidential form with low grade with bureaucrat method\n";
		PresidentialPardonForm f("Navalny");
		Bureaucrat b("b", 150);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign presidential form with low grade with form method\n";
		PresidentialPardonForm f("Navalny");
		Bureaucrat b("b", 150);
		f.beSigned(b);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign robotomy form with low grade with bureaucrat method\n";
		RobotomyRequestForm f("taxi");
		Bureaucrat b("b", 150);
		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "Try to sign robotomy form with low grade with form method\n";
		RobotomyRequestForm f("taxi");
		Bureaucrat b("b", 150);
		f.beSigned(b);
		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "success sign and exec shrubbery creation form\n";
		ShrubberyCreationForm f("park");
		Bureaucrat b("b", 50);
		b.signForm(f);
		b.executeForm(f);
		f.execute(b);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "success sign and exec presidential form\n";
		PresidentialPardonForm f("Navalny");
		Bureaucrat b("b", 1);
		b.signForm(f);
		b.executeForm(f);
		f.execute(b);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "success sign and exec robotomy form\n";
		RobotomyRequestForm f("taxi");
		Bureaucrat b("b", 1);
		b.signForm(f);
		b.executeForm(f);
		f.execute(b);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "try to exec not signed shrubbery creation form\n";
		ShrubberyCreationForm f("park");
		Bureaucrat b("b", 50);
		b.executeForm(f);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "try to exec shrubbery creation form with low grade\n";
		ShrubberyCreationForm f("park");
		Bureaucrat b("b", 140);
		b.signForm(f);
		b.executeForm(f);

		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "try to exec not signed presidential form\n";
		PresidentialPardonForm f("Navalny");
		Bureaucrat b("b", 10);
		b.executeForm(f);

		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "try to exec presidential form with low grade\n";
		PresidentialPardonForm f("Navalny");
		Bureaucrat b("b", 10);
		b.signForm(f);
		b.executeForm(f);

		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "try to exec not signed robotomy form\n";
		RobotomyRequestForm f("taxi");
		Bureaucrat b("b", 50);
		b.executeForm(f);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------" << std::endl;
	try {
		std::cout << "try to exec robotomy form with low grade\n";
		RobotomyRequestForm f("taxi");
		Bureaucrat b("b", 50);
		b.signForm(f);
		b.executeForm(f);

		std::cout << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}