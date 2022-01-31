#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : \
	AForm("Presidential Pardon Form", target, 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : \
	AForm(src) {}

void PresidentialPardonForm::action() const {
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &exe) const {
	AForm::execute(exe);
	this->action();
}