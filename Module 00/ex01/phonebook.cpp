#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.hpp"

int		Phonebook::add_contact(int i) {
	if (i < 8) {
		std::cin.ignore();
		std::cout << "\nВведите Имя контакта: ";
		getline(std::cin, m_name[i]);
		std::cout << "\nВведите Фамилию контакта: ";
		getline(std::cin, m_surname[i]);
		std::cout << "\nВведите Никнейм контакта: ";
		getline(std::cin, m_nick[i]);
		std::cout << "\nВведите Номер контакта: +";
		getline(std::cin, m_number[i]);
		std::cout << "\nВведите Темный секрет контакта: ";
		getline(std::cin, m_secret[i]);
		i++;
	}
	else {
		i = 0;
		i = add_contact(i);
	}
	return (i);
}

void	Phonebook::going_out(std::string str) {
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
}

void	Phonebook::lenght_table(int j) {
	std::cout << "\n------------------";
	lenght_column(m_name[j]);
	lenght_column(m_surname[j]);
	lenght_column(m_nick[j]);
	lenght_column(m_number[j]);
	lenght_column(m_secret[j]);
	std::cout << "\n";
}

void	Phonebook::lenght_column(std::string str) {
	if (str.length() < 10)
		std::cout << "" << std::setfill('-') << std::setw(10);
	else
		std::cout << "" << std::setfill('-') << std::setw(str.length());
}

void	Phonebook::search_contact(int j) {
	if (m_name[j].length() == 0) {
		std::cout << "Ошибка! Контакта с таким индексом не существует.\n";
		return ;
	}
	lenght_table(j);
	std::cout << std::right << std::setfill(' ') << "|"
		<< std::setw(10) << j << "|";
		going_out(m_name[j]);
		going_out(m_surname[j]);
		going_out(m_nick[j]);
		going_out(m_number[j]);
		going_out(m_secret[j]);
	lenght_table(j);
}

void	Phonebook::output_cont(std::string str) {
	if (str.length() >= 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".|";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
}

void	Phonebook::view_contacts(int i) {
	std::cout << "\n---------------------------------------------\n";
	for (int u = 0; u < i; u++) {
		std::cout << std::right << std::setfill(' ') << "|"
			<< std::setw(10) << u << "|";
		output_cont(m_name[u]);
		output_cont(m_surname[u]);
		output_cont(m_nick[u]);
		std::cout << "\n---------------------------------------------\n";
	}
}

int	main() {
	Phonebook	cont;
	std::string	com;
	int			j, i = 0;

	std::cout << " //    | " << "  Введите команду  " << " |    \\\\ " << std::endl;
	std::cout << "//     | " << "(ADD, EXIT, SEARCH)" << " |     \\\\" << std::endl;
	std::cout << "\n: ";
	while (com != "EXIT" && com != "Exit" && com != "exit" && std::cin >> com) {
		if (com == "ADD" || com == "Add" || com == "add") {
			i = cont.add_contact(i);
		}
		else if (com == "SEARCH" || com == "Search" || com == "search") {
			cont.view_contacts(i);
			std::cout << "        " << "**Введите индекс**" << "         " << std::endl << ": ";
			std::cin >> j;
			cont.search_contact(j);
		}
		std::cout << "\n: ";
	}
	return 0;
}
