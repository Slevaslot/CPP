#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private : 
		std::string const _name;
        int _grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat& operator=(const Bureaucrat& bureaucrat);
        std::string getName() const;
        int getGrade() const;
        class GradeTooLowException: public std::exception {
            public :
                virtual const char *what() const throw();
        };
        class GradeTooHighException: public std::exception {
            public :
                virtual const char* what() const throw();
        };
        void signForm(Form &form);
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();
};
std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif