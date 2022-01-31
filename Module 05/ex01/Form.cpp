#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException() : std::exception() {};

Form::GradeTooLowException::GradeTooLowException() : std::exception() {};

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
	return "grade required to sign it, is too low\n";
}

const char *Form::GradeTooHighException::what() const throw() {
	return "grade required to sign it, is too high\n";
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : \
	_name(name), _gradeExecute(gradeExecute), _gradeSign(gradeSign), _signed(false){
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &src) : _name(src._name), _gradeExecute(src._gradeExecute), \
	_gradeSign(src._gradeSign), _signed(src._signed) {}

std::string Form::getName() const {
	return (this->_name);
}

bool Form::isSigned() const {
	return (this->_signed);
}

int Form::getGradeSign() const {
	return (this->_gradeSign);
}

int Form::getGradeExecute() const {
	return (this->_gradeExecute);
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->_gradeSign) {
		if (this->_signed)
			throw std::string("the form has already been signed");
		else
			this->_signed = true;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {
	out << "THE STATE OF THE FORM.\nName: " << obj.getName() << "\nSignature status: " \
		<< obj.isSigned() << "\nGrade required to sign it: " << obj.getGradeSign() \
		<< "\nGrade required to execute it: " << obj.getGradeExecute() << std::endl;;
	return out;
}