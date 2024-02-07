#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

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
        ~Bureaucrat();
};
std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif