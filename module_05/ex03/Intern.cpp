//
// Created by mtriston on 24.01.2021.
//

#include "Intern.hpp"

Intern::Intern() {
	_funcPool[0] = &Intern::makePresidentialPardonForm;
	_funcPool[1] = &Intern::makeRobotomyRequestForm;
	_funcPool[2] = &Intern::makeShrubberyCreationForm;
	_strPool[0] = "presidential pardon";
	_strPool[1] = "robotomy request";
	_strPool[2] = "shrubbery creation";
}

Intern::Intern(const Intern &a) { (void(a)); }

Intern::~Intern() {}

Intern & Intern::operator=(const Intern &) {
	return (*this);
}

AForm* Intern::makePresidentialPardonForm(const std::string &target) const {
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomyRequestForm(const std::string &target) const {
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShrubberyCreationForm(const std::string &target) const {
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string &name, const std::string &target) const {
	for (int i = 0; i < 3; ++i) {
		if (_strPool[i] == name) {
			std::cout << "Intern creates " << name << " form" << std::endl;
			return ((this->*_funcPool[i])(target));
		}
	}
	std::cout << name << ": unknown type of form" << std::endl;
	return (0);
}