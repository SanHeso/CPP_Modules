#include <iostream>
#include <fstream>

void	check(int argc, char **argv) {
	if (argc != 4) {
		std::cout<<"Error: Bad argument!1";
		exit(0);
	}
	else if (!strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3])) {
		std::cout<<"Error: Bad argument!2";
		exit(0);
	}
}

int	main(int argc, char **argv) {
	std::ifstream	file(argv[1]);
	std::ofstream	out;
	std::string		str;
	std::string		tmp;

	check(argc, argv);

	tmp = argv[1];
	out.open(tmp + ".replace");

	if (file.is_open() && out.is_open()) {
		while (std::getline(file, tmp)) {
			int i = -1;
			int found;

			while(++i < (int)tmp.length()) {
				if ((found = tmp.find(argv[2], i)) != -1) {
					tmp.erase(found, strlen(argv[2]));
					tmp.insert(found, argv[3]);
				}
			}
			str+=tmp + "\n";
		}
		out << str;
		file.close();
	}
	else
		std::cout << "Error: File not found!" << std::endl;
}