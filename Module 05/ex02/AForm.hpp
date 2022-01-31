#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

private:
	const std::string _name;
	const std::string _target;
	const int _gradeExecute;
	const int _gradeSign;
	bool _signed;

public:
	AForm(std::string name, int gradeSign, int gradeExecute);
	AForm(std::string name, std::string target, int gradeSign, int gradeExecute);
	virtual ~AForm();
	AForm(const AForm &src);

	std::string getName(void) const;
	int getGradeSign(void) const;
	int getGradeExecute(void) const;
	const std::string getTarget(void) const;
	void beSigned(Bureaucrat &b);
	bool isSigned(void) const;
	virtual void execute(const Bureaucrat &exe) const;
	virtual void action() const = 0;

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

	class	FormNotSignedException : public std::exception {
	public:
		FormNotSignedException();
		virtual ~FormNotSignedException() throw ();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
