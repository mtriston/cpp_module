//
// Created by mtriston on 23.01.2021.
//

#ifndef MODULE_05_AFORM_HPP
#define MODULE_05_AFORM_HPP

#include <string>
class AForm;
#include "Bureaucrat.hpp"

class AForm {
private:
	const std::string _name;
	std::string	_target;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;

	AForm();

public:
	AForm(std::string const &name, std::string const &target, int signGrade, int execGrade);

	AForm(AForm const &);

	virtual ~AForm();

	AForm &operator=(AForm const &);

	std::string const &getName() const;

	std::string const &getTarget() const;

	bool getIsSigned() const;

	int getSignGrade() const;

	int getExecGrade() const;

	void beSigned(Bureaucrat const &);

	void execute(Bureaucrat const &) const;

	virtual void action() const = 0;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() { return "Grade is too high!"; }
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() { return "Grade is too low!"; }
	};
};

std::ostream &operator<<(std::ostream &os, AForm const &a);

#endif //MODULE_05_AFORM_HPP
