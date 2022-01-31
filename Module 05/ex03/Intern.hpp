#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

private:
	std::string	formNames[3];
	AForm *(Intern::*f[3])(std::string terget);

public:
	Intern();
	~Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &src);

	AForm *newShrubberyCreation(std::string target);
	AForm *newRobotomyRequest(std::string target);
	AForm *newPresidentialPardon(std::string target);
	AForm *makeForm(std::string forName, std::string target);

	class	FormNotFoundException : public std::exception {
	public:
		FormNotFoundException();
		virtual ~FormNotFoundException() throw();
		virtual const char* what() const throw();
	};
};

#endif