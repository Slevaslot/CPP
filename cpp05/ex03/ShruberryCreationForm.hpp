#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include <fstream>

class ShruberryCreationForm : public AForm {
	private :
		std::string _target;
	public :
		ShruberryCreationForm();
		ShruberryCreationForm(std::string name);
		ShruberryCreationForm(const ShruberryCreationForm & Robot);
		std::string getTarget() const;
        ShruberryCreationForm& operator=(const ShruberryCreationForm& Robot);
        ~ShruberryCreationForm();
		void executeConcrete() const;
};

#endif