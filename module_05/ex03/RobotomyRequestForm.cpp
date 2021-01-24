//
// Created by mtriston on 23.01.2021.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
:
AForm("RobotomyRequestForm", "something", 72, 45) { std::srand(time(0)); }

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
:
AForm("RobotomyRequestForm",target, 72, 45) { std::srand(time(0)); }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a) : AForm(a) { std::srand(time(0)); }

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a) {
	AForm::operator=(a);
	return (*this);
}

void RobotomyRequestForm::action() const {
	int index = std::rand() % 2;

	std::cout << "* BEEP! BEEP! BEEP! * " << std::endl;
	if (index == 1)
		std::cout << "success: " << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "failure: " << getTarget() << " hasn't been robotomized" << std::endl;
}

