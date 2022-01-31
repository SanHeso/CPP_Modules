#include <string>

class Phonebook {

private:
	std::string	m_name[8];
	std::string	m_surname[8];
	std::string m_nick[8];
	std::string	m_number[8];
	std::string m_secret[8];

public:
	int		add_contact(int i);
	void	going_out(std::string str);
	void	lenght_table(int j);
	void	lenght_column(std::string str);
	void	search_contact(int j);
	void	output_cont(std::string str);
	void	view_contacts(int i);
};