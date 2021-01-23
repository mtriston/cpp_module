//
// Created by mtriston on 23.01.2021.
//

#ifndef MODULE_05_FORM_HPP
#define MODULE_05_FORM_HPP

#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form {
private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;

	Form();

public:
	Form(std::string const &name, int signGrade, int execGrade);

	Form(Form const &);

	~Form();

	Form &operator=(Form const &);

	std::string const &getName() const;

	bool getIsSigned() const;

	int getSignGrade() const;

	int getExecGrade() const;

	void beSigned(Bureaucrat &);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() { return "Grade is too high!"; }
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() { return "Grade is too low!"; }
	};
};

std::ostream &operator<<(std::ostream &os, Form const &a);

#endif //MODULE_05_FORM_HPP
