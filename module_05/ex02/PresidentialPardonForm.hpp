//
// Created by mtriston on 23.01.2021.
//

#ifndef MODULE_05_PRESIDENTIALPARDONFORM_HPP
#define MODULE_05_PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm();
	void action() const;
};


#endif //MODULE_05_PRESIDENTIALPARDONFORM_HPP
