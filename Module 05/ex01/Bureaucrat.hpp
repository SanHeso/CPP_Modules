#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# define FLICK "\033[1;5m"
# define EOC "\033[0m"
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"

# include <iostream>
# include "Form.hpp"

class Form;

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
	void signForm(Form &f);

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
