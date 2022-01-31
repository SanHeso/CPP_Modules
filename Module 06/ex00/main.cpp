#include "Convert.hpp"

int main (int argc, char **argv) {
	if (argc != 2){
		std::cout << "Wrong args number" << std::endl;
		return (0);
	}
	try {
		Convert	obj;
		obj.print(argv[1]);
	}
	catch (std::string &e) {
		std::cout << "Error: " << e << std::endl;
	}
}