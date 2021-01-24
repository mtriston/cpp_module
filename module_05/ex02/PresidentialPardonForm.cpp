//
// Created by mtriston on 23.01.2021.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:
AForm("PresidentialPardonForm", "something", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
:
AForm("PresidentialPardonForm",target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a) : AForm(a) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a) {
	AForm::operator=(a);
	return (*this);
}

void PresidentialPardonForm::action() const{
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}