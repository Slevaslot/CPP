#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private : 
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
        class GradeTooLowException: public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooHighException: public std::exception {
            public :
                virtual const char* what() const throw();
        };
        class FormIsNotSignedException: public std::exception {
            public :
                virtual const char* what() const throw();
        };
        void beSigned(Bureaucrat &bureaucrat);
        void execute(Bureaucrat &bureaucrat);
		virtual void	executeConcrete() const = 0;
        virtual ~AForm();
};
std::ostream &operator<<(std::ostream& os, const AForm& Aform);

#endif