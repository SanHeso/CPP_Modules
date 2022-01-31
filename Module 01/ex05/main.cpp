#include "Karen.hpp"

int main() {
	std::string level;
	Karen		myKaren;

	std::cout << "enter level: ";
	std::cin >> level;
	myKaren.complain(level);
	return 0;
}