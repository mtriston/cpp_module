//
// Created by mtriston on 23.01.2021.
//

#include "Form.hpp"

Form::Form() : _name("nameless"), _isSigned(false), _signGrade(150), _execGrade(150) {}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _isSigned(false),
																	_signGrade(signGrade), _execGrade(execGrade) {
	if (_signGrade < MAX_GRADE || _execGrade < MAX_GRADE)
		throw GradeTooHighException();
	else if (_signGrade > MIN_GRADE || _execGrade > MIN_GRADE)
		throw GradeTooLowException();
}

Form::Form(const Form &a) : _name(a._name), _isSigned(a._isSigned), _signGrade(a._signGrade),
							_execGrade(a._execGrade) {}

Form::~Form() {}

Form &Form::operator=(const Form &a) {
	if (this != &a) {
		_isSigned = a._isSigned;
	}
	return (*this);
}

const std::string &Form::getName() const { return _name; }

bool Form::getIsSigned() const { return _isSigned; }

int Form::getSignGrade() const { return _signGrade; }

int Form::getExecGrade() const { return _execGrade; }

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

std::ostream &operator<<(std::ostream &os, Form const &a) {
	if (a.getIsSigned())
		os << "Signed ";
	else
		os << "Not signed ";
	os << a.getName() << " form, grade for sign is " << a.getSignGrade();
	os << ", grade for execute is " << a.getExecGrade();
	return (os);
}