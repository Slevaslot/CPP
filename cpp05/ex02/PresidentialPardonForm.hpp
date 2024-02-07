#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name, int grade1, int grade2);
		PresidentialPardonForm(const PresidentialPardonForm & Presid);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& Presid);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor);
};

#endif