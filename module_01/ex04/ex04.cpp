#include <string>
#include <iostream>

int main()
{
	std::string str;
	std::string *str_pointer;

	str = "HI THIS IS BRAIN";
	str_pointer = &str;
	std::string &str_link = str;
	std::cout << *str_pointer << std::endl;
	std::cout << str_link << std::endl;
	return (0);
}
