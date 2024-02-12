#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm {
	private :
		std::string _target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm & Presid);
		std::string getTarget() const;
        PresidentialPardonForm& operator=(const PresidentialPardonForm& Presid);
        ~PresidentialPardonForm();
		void executeConcrete() const;
};

#endif