#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	srand(time(NULL));
	try
	{
		Bureaucrat	nick("Nick", 150);
		Bureaucrat	tom("Tom", 1);
		std::cout << "------------SHRUBBERY CREATION FORM------------" << std::endl;
		{
			ShrubberyCreationForm	form("Home");
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << EOC << MAGENTA << form << EOC << "\n" << std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" <<std::endl;
			std::cout << BLUE;
			nick.signForm(form);
			tom.signForm(form);
			std::cout << EOC << std::endl;
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" <<std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
		}
		std::cout << "------------ROBOTOMY REQUEST FORM------------" << std::endl;
		{
			RobotomyRequestForm	form("Home");
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" << std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			nick.signForm(form);
			tom.signForm(form);
			std::cout << EOC << std::endl;
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" << std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
		}
		std::cout << "------------PRESIDENTIAL PARDON FORM------------" << std::endl;
		{
			PresidentialPardonForm	form("Home");
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" <<std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" <<std::endl;
			std::cout << BLUE;
			nick.signForm(form);
			tom.signForm(form);
			std::cout << EOC << std::endl;
			std::cout << YELLOW << nick << "\n" << EOC << YELLOW << tom << "\n" << EOC << MAGENTA << form << EOC << "\n" <<std::endl;
			std::cout << BLUE;
			nick.executeForm(form);
			tom.executeForm(form);
			std::cout << EOC << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Bureaucrat failure: " << e.what() << EOC << std::endl;
	}

	return (0);
}