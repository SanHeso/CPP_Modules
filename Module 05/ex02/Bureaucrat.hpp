#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);

	const std::string getName(void) const;
	int getGrade(void) const;
	void incrementGrade(int n);
	void decrementGrade(int n);
	void signForm(AForm &f);
	void executeForm(const AForm &f);

	class	GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw ();
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw ();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
