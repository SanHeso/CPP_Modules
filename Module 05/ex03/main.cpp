#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern noob;
		AForm *newForm = noob.makeForm("shrubbery creation", "MR");
		Bureaucrat Hermes("Hermes Conrad", 5);
		std::cout << GREEN;
		Hermes.signForm(*newForm);
		Hermes.executeForm(*newForm);
		std::cout << EOC << std::endl;
		delete newForm;

		newForm = noob.makeForm("robotomy request", "Boom");
		std::cout << GREEN;
		Hermes.signForm(*newForm);
		Hermes.executeForm(*newForm);
		std::cout << EOC << std::endl;
		delete newForm;

		newForm = noob.makeForm("presidential pardon", "Bastic");
		std::cout << GREEN;
		Hermes.signForm(*newForm);
		Hermes.executeForm(*newForm);
		std::cout << EOC;
		delete newForm;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what()<<std::endl;
	}
}