#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();

	virtual void action() const;
	virtual void execute(const Bureaucrat &exe) const;
};

#endif