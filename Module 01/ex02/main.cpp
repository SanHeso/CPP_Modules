#include <iostream>

int		main() {
	std::string orig_str = "HI THIS IS BRAIN";
	std::string *stringPTR = &orig_str;
	std::string &stringREF = orig_str;

	std::cout << "Адресс оригианльной строки: " << &orig_str << std::endl;
	std::cout << "Адресс stringPTR: " << &(*stringPTR) << std::endl;
	std::cout << "Адресс stringREF: " << &stringREF << std::endl;

	std::cout << "\nОригианльная строка: " << orig_str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}