#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	const std::string _name;
	const int _gradeExecute;
	const int _gradeSign;
	bool _signed;

public:
	Form(std::string name, int gradeSign, int gradeExecute);
	virtual ~Form();
	Form(const Form &src);

	std::string getName(void) const;
	int getGradeSign(void) const;
	int getGradeExecute(void) const;
	void beSigned(Bureaucrat &b);
	bool isSigned(void) const;

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

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
