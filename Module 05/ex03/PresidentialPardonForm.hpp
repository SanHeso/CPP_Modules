#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();

	virtual void action() const;
	virtual void execute(const Bureaucrat &exe) const;
};

#endif