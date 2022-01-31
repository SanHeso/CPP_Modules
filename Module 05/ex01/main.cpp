#include "Bureaucrat.hpp"
#include "Form.hpp"


void Doc(int gradeToSign, int gradeToExecute)
{
	std::cout << YELLOW << "Doc (" << RED << gradeToSign << EOC
		<< ":" << RED << gradeToExecute << EOC << ")" << std::endl;
	try
	{
		Form f("Document", gradeToSign, gradeToExecute);
		std::cout << GREEN << "Yes" << EOC << std::endl;
		std::cout << MAGENTA << f << EOC << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Document: " << e.what() << EOC << std::endl;
	}
}


int	main() {
	try
	{
		std::cout << "-------------------------------------" << std::endl;
		{
			Bureaucrat	n("Clerk", 10);
			Form		f("Document", 5, 5);

			std::cout << YELLOW << n << std::endl;
			std::cout << MAGENTA << f << EOC << std::endl;
			std::cout << std::endl;
			n.signForm(f);
			n.incrementGrade(5);
			std::cout << YELLOW << n << std::endl;
			std::cout << MAGENTA << f << EOC << std::endl;
			std::cout << std::endl;
			n.signForm(f);
			std::cout << MAGENTA << f << EOC << std::endl;
			std::cout << std::endl;
			n.signForm(f);
		}
		std::cout << std::endl << "-------------------------------------" << std::endl;
		{
			Doc(150, 1);
			Doc(151, 1);
			Doc(0, 1);
			Doc(150, 200);
			Doc(150, 0);
		}
		std::cout << std::endl << "-------------------------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Bureaucrat failure: " << EOC << e.what() << EOC << std::endl;
	}
	return (0);
}