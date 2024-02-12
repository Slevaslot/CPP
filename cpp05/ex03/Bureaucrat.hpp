#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

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
        void GradeTooHighException();
        void GradeTooLowException();
        void signForm(AForm &aform);
        void executeForm(AForm &aform);
        ~Bureaucrat();
};
std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif