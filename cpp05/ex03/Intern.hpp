#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class Intern {
	public :
		Intern();
		Intern(const Intern & Presid);
        Intern& operator=(const Intern& Presid);
        AForm *makeForm(std::string nameForm, std::string);
        ~Intern();
		void executeConcrete() const;
        class WrongFormNameException: public std::exception {
            public :
                virtual const char* what() const throw();
        };
        AForm *newPresidentialPardonForm(std::string target);
        AForm *newShruberryCreationForm(std::string target);
        AForm *newRobotomyRequestForm(std::string target);
};

#endif