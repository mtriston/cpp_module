//
// Created by mtriston on 24.01.2021.
//

#ifndef MODULE_05_INTERN_HPP
#define MODULE_05_INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	AForm* (Intern::*_funcPool[3])(std::string const &) const;
	std::string _strPool[3];
	Intern(Intern const &);
	Intern &operator=(Intern const &);
	AForm* makePresidentialPardonForm(std::string const &) const;
	AForm* makeRobotomyRequestForm(std::string const &) const;
	AForm* makeShrubberyCreationForm(std::string const &) const;
public:
	Intern();
	~Intern();
	AForm* makeForm(std::string const &name, std::string const &target) const;
};


#endif //MODULE_05_INTERN_HPP
