#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class ShruberryCreationForm : public AForm {
	public :
		ShruberryCreationForm();
		ShruberryCreationForm(std::string name, int grade1, int grade2);
		ShruberryCreationForm(const ShruberryCreationForm & robot);
        ShruberryCreationForm& operator=(const ShruberryCreationForm& Shrub);
        ~ShruberryCreationForm();
        void execute(Bureaucrat const & executor);
};

#endif