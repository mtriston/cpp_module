#include <iostream>
#include <cctype>

static void	print_uppercase(char *str)
{
	while (*str)
	{
		std::cout << (char)std::toupper(*str);
		++str;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
			print_uppercase(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
