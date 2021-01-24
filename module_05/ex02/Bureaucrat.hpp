//
// Created by mtriston on 21.01.2021.
//

#ifndef MODULE_05_BUREAUCRAT_HPP
#define MODULE_05_BUREAUCRAT_HPP

#include <string>
#include <iostream>
class Bureaucrat;
#include "AForm.hpp"
#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat {
private:
	std::string const _name;
	int _grade;

	Bureaucrat();
public:
	Bureaucrat(std::string const &name, int grade);

	Bureaucrat(Bureaucrat const &);

	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &);

	std::string const &getName() const;

	int getGrade() const;

	void incGrade();

	void decGrade();

	void signForm(AForm &);

	void executeForm(AForm const &);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() { return "Grade is too high!"; }
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() { return "Grade is too low!"; }
	};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &a);

#endif //MODULE_05_BUREAUCRAT_HPP
