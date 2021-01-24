//
// Created by mtriston on 23.01.2021.
//

#include "AForm.hpp"

AForm::AForm() : _name("nameless"), _target("something"), _isSigned(false), _signGrade(150), _execGrade(150) {}

AForm::AForm(std::string const &name, std::string const &target, int signGrade, int execGrade) : _name(name),
																								 _target(target),
																								 _isSigned(false),
																								 _signGrade(signGrade),
																								 _execGrade(execGrade) {
	if (_signGrade < MAX_GRADE || _execGrade < MAX_GRADE)
		throw GradeTooHighException();
	else if (_signGrade > MIN_GRADE || _execGrade > MIN_GRADE)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &a) :
		_name(a._name), _target(a._target), _isSigned(a._isSigned), _signGrade(a._signGrade),
		_execGrade(a._execGrade) {}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &a) {
	if (this != &a) {
		_target = a._target;
		_isSigned = a._isSigned;
	}
	return (*this);
}

const std::string &AForm::getName() const { return _name; }

const std::string & AForm::getTarget() const { return _target; }

bool AForm::getIsSigned() const { return _isSigned; }

int AForm::getSignGrade() const { return _signGrade; }

int AForm::getExecGrade() const { return _execGrade; }

void AForm::beSigned(Bureaucrat const &b) {
	if (_isSigned)
		std::cout << b << " cannot sign " << *this << " because the form is already signed" << std::endl;
	else if (b.getGrade() > _signGrade) {
		std::cout << b << " cannot sign " << *this << " due to low rank" << std::endl;
		throw GradeTooLowException();
	}
	else {
		std::cout << b << " signs " << *this << std::endl;
		_isSigned = true;
	}
}

void AForm::execute(const Bureaucrat &b) const {
	if (!_isSigned) {
		std::cout << *this << " is not signed" << std::endl;
	}
	else {
		if (b.getGrade() > _execGrade) {
			std::cout << b << " can't execute " << *this << " due low rank" << std::endl;
			throw GradeTooLowException();
		}
		else {
			std::cout << b << " executes " << *this << std::endl;
			action();
		}
	}
}

std::ostream &operator<<(std::ostream &os, AForm const &a) {
	if (a.getIsSigned())
		os << "signed ";
	else
		os << "not signed ";
	os << a.getName() << " for " << a.getTarget() << " (sign: " << a.getSignGrade();
	os << ", execute: " << a.getExecGrade() << ")";
	return (os);
}