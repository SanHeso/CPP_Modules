#include <iostream>

char	*change_case(char *str)
{
	for (int j = 0; str[j] != '\0'; j++) {
		if (std::islower(str[j]))
			str[j] = std::toupper(str[j]);
	}
	return str;
}

int	main(int argc, char **argv) {
	if (argc != 1)
	{
		for (int i = 1; i < argc; i++) {
			argv[i] = change_case(argv[i]);
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}