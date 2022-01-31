#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception() {};

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception() {};

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is low!");
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
	if (this != &src)
	{
		(std::string)this->_name = src.getName();
		this->_grade = src.getGrade();
	}
	return *this;
}

const std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void Bureaucrat::incrementGrade(int n) {
	this->_grade -= n;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(int n) {
	this->_grade += n;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &f) {
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->getName() << " cannot sign " << f.getName() << " because " << e.what();
	}
	catch (std::string reasonAlreadySigned) {
		std::cout << this->getName() << " cannot sign " << f.getName() << " because " << reasonAlreadySigned;
	}
}

void Bureaucrat::executeForm(const AForm &f) {
	try {
		f.execute(*this);
		std::cout << this->_name << " executes " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Execution is failed because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return out;
}