#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class RobotmyRequestForm : public AForm {
	public :
		RobotmyRequestForm();
		RobotmyRequestForm(std::string name, int grade1, int grade2);
		RobotmyRequestForm(const RobotmyRequestForm & robot);
        RobotmyRequestForm& operator=(const RobotmyRequestForm& Robot);
        ~RobotmyRequestForm();
        void execute(Bureaucrat const & executor);
};

#endif