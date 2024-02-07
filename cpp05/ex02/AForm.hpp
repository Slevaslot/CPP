#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected : 
		std::string const _name;
        int _exec_grade;
        int _sign_grade;
        bool _is_signed;
	public :
		AForm();
		AForm(std::string name, int grade1, int grade2);
		AForm(const AForm& Aform);
        AForm& operator=(const AForm& Aform);
        std::string getName() const;
        int getExecGrade() const;
        int getSignGrade() const;
        bool getIsSigned() const;
        void GradeTooHighException();
        void GradeTooLowException();
        int beSigned(Bureaucrat &bureaucrat);
        virtual ~AForm() = 0;
};
std::ostream &operator<<(std::ostream& os, const AForm& Aform);

#endif