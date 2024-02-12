#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private :
		std::string _target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm & Robot);
		std::string getTarget() const;
        RobotomyRequestForm& operator=(const RobotomyRequestForm& Robot);
        ~RobotomyRequestForm();
		void executeConcrete() const;
};

#endif