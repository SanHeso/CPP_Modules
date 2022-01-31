#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : \
	AForm("Robotomy Request Form", target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : \
	AForm(src) {}

void RobotomyRequestForm::action() const {
	if (rand() % 2)
		std::cout << "Bzrzzzzzzz...\n" << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Oh shit, it’s a failure" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &exe) const {
	AForm::execute(exe);
	this->action();
}