//
// Created by mtriston on 23.01.2021.
//

#ifndef MODULE_05_ROBOTOMYREQUESTFORM_HPP
#define MODULE_05_ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);
	~RobotomyRequestForm();
	void action() const;
};


#endif //MODULE_05_ROBOTOMYREQUESTFORM_HPP
