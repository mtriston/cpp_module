//
// Created by mtriston on 23.01.2021.
//

#ifndef MODULE_05_SHRUBBERYCREATIONFORM_HPP
#define MODULE_05_SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();
	void action() const;
};


#endif //MODULE_05_SHRUBBERYCREATIONFORM_HPP
