//
// Created by mtriston on 21.01.2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Noname"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade) {
	if (grade < MAX_GRADE)
		throw GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : _name(a._name), _grade(a._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a) {
	_grade = a._grade;
	return *this;
}

const std::string &Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::decGrade() {
	if (_grade == MIN_GRADE)
		throw GradeTooLowException();
	else
		--_grade;
}

void Bureaucrat::incGrade() {
	if (_grade == MAX_GRADE)
		throw GradeTooHighException();
	else
		++_grade;
}

void Bureaucrat::signForm(Form &f) {
	if (f.getIsSigned())
		std::cout << *this << " cannot sign " << f << " because the form is already signed" << std::endl;
	else if (f.getSignGrade() < _grade)
		std::cout << *this << " cannot sign " << f << " due to low rank" << std::endl;
	else
		std::cout << *this << " sign " << f << std::endl;
	f.beSigned(*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &a) {
	return (os << a.getName() << ", bureaucrat grade " << a.getGrade());
}
