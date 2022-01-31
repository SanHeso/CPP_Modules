#include "AForm.hpp"

AForm::GradeTooHighException::GradeTooHighException() : std::exception() {};

AForm::GradeTooLowException::GradeTooLowException() : std::exception() {};

AForm::FormNotSignedException::FormNotSignedException() : std::exception() {};

AForm::GradeTooHighException::~GradeTooHighException() throw() {}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

AForm::FormNotSignedException::~FormNotSignedException() throw() {}

const char *AForm::GradeTooLowException::what() const throw() {
	return "grade required to sign it, is too low\n";
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "grade required to sign it, is too high\n";
}

const char *AForm::FormNotSignedException::what() const throw() {
	return "form not signed\n";
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : \
	_name(name), _gradeExecute(gradeExecute), _gradeSign(gradeSign), _signed(false){
	if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(std::string name, std::string target, int gradeSign, int gradeExecute) : \
	_name(name), _target(target), _gradeExecute(gradeExecute), _gradeSign(gradeSign), \
	_signed(false) {
	if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &src) : _name(src._name), _target(src._target), \
	_gradeExecute(src._gradeExecute), _gradeSign(src._gradeSign), _signed(src._signed) {}

std::string AForm::getName() const {
	return (this->_name);
}

bool AForm::isSigned() const {
	return (this->_signed);
}

int AForm::getGradeSign() const {
	return (this->_gradeSign);
}

int AForm::getGradeExecute() const {
	return (this->_gradeExecute);
}

const std::string AForm::getTarget() const {
	return (this->_target);
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->_gradeSign) {
		if (this->_signed)
			throw std::string("the form has already been signed");
		else
			this->_signed = true;
	}
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(const Bureaucrat &exe) const {
	if (!this->_signed)
		throw AForm::FormNotSignedException();
	if (exe.getGrade() > this->_gradeExecute)
		throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const AForm &obj) {
	out << "THE STATE OF THE FORM.\nName: " << obj.getName() << "\nSignature status: " \
		<< obj.isSigned() << "\nGrade required to sign it: " << obj.getGradeSign() \
		<< "\nGrade required to execute it: " << obj.getGradeExecute() << std::endl;;
	return out;
}