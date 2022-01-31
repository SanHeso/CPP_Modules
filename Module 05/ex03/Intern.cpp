#include "Intern.hpp"

Intern::FormNotFoundException::FormNotFoundException() {}

Intern::FormNotFoundException::~FormNotFoundException() throw() {}

const char *Intern::FormNotFoundException::what() const throw() {
	return ("Form is not found");
}

Intern::Intern() {
	this->formNames[0] = "shrubbery creation";
	this->formNames[1] = "robotomy request";
	this->formNames[2] = "presidential pardon";
	this->f[0] = &Intern::newShrubberyCreation;
	this->f[1] = &Intern::newRobotomyRequest;
	this->f[2] = &Intern::newPresidentialPardon;
}

Intern::~Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern &Intern::operator=(const Intern &src) {
	if (this != &src) {
		this->formNames[0] = "shrubbery request";
		this->formNames[1] = "robotomy request";
		this->formNames[2] = "random request";
		this->f[0] = &Intern::newShrubberyCreation;
		this->f[1] = &Intern::newRobotomyRequest;
		this->f[2] = &Intern::newPresidentialPardon;
	}
	return (*this);
}

AForm *Intern::newShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::newRobotomyRequest(std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::newPresidentialPardon(std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string forName, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (forName == this->formNames[i]) {
			std::cout << CYAN << "Intern creates " << forName << EOC << std::endl;
			return ((this->*f[i])(target));
		}
	}
	throw FormNotFoundException();
}