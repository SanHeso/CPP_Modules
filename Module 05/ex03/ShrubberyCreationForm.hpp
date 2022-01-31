#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();

	virtual void action() const;
	virtual void execute(const Bureaucrat &exe) const;
};

#endif