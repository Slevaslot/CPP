#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private : 
		std::string const _name;
        int _exec_grade;
        int _sign_grade;
        bool _is_signed;
	public :
		Form();
		Form(std::string name, int grade1, int grade2);
		Form(const Form& form);
        Form& operator=(const Form& form);
        std::string getName() const;
        int getExecGrade() const;
        int getSignGrade() const;
        bool getIsSigned() const;
        void GradeTooHighException();
        void GradeTooLowException();
        int beSigned(Bureaucrat &bureaucrat);
        ~Form();
};
std::ostream &operator<<(std::ostream& os, const Form& form);

#endif