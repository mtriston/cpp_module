//
// Created by mtriston on 23.01.2021.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:
AForm("ShrubberyCreationForm", "something", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
:
AForm("ShrubberyCreationForm",target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a) : AForm(a) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a) {
	AForm::operator=(a);
	return (*this);
}

void ShrubberyCreationForm::action() const {
	std::ofstream file;
	std::string fileName = getTarget() + std::string ("_shrubbery");

	file.open(fileName.c_str());
	file << "        __ _.--..--._ _\n"
		 << "     .-' _/   _/\\_   \\_'-.\n"
		 <<	"    |__ /   _/\\__/\\_   \\__|\n"
		 <<	"       |___/\\_\\__/  \\___|\n"
		 <<	"              \\__/\n"
		 <<	"              \\__/\n"
		 <<	"               \\__/\n"
		 <<	"                \\__/\n"
		 <<	"             ____\\__/___\n"
		 <<	"       . - '             ' -.\n"
		 <<	"      /                      \\\n"
		 <<	"~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~\n"
		 <<	"  ~~~   ~~~~~   ~!~~   ~~ ~  ~ ~ ~~~~\n";
	file.close();

}

ShrubberyCreationForm::~ShrubberyCreationForm() {}