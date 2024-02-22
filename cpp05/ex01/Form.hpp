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
        int const _sign_grade;
        int const _exec_grade;
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
        class GradeTooLowException: public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooHighException: public std::exception {
            public :
                virtual const char* what() const throw();
        };
        int beSigned(Bureaucrat &bureaucrat);
        ~Form();
};
std::ostream &operator<<(std::ostream& os, const Form& form);

#endif
