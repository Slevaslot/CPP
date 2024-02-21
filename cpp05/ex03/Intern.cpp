#include "Intern.hpp"

Intern::Intern() {};

Intern::~Intern() {};

AForm *Intern::newPresidentialPardonForm(std::string target) {
    return (new PresidentialPardonForm(target));
}

AForm *Intern::newRobotomyRequestForm(std::string target) {
    return (new RobotomyRequestForm(target));
}

AForm *Intern::newShruberryCreationForm(std::string target) {
    return (new ShruberryCreationForm(target));
}

const char* Intern::WrongFormNameException:: what() const throw() {
	return "Bureaucrat's grade too high";
}

AForm *Intern::makeForm(std::string nameForm, std::string target) {
    std::string str[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShruberryCreationForm"};
    AForm* (Intern::*formFunc[3])(std::string target) = {&Intern::newPresidentialPardonForm, &Intern::newRobotomyRequestForm, &Intern::newShruberryCreationForm};
    try {
        int i = 0;
            while (!str[i].empty()) {
                if (str[i] == nameForm) 
                {
                    std::cout << "Intern creates " << nameForm << std::endl;
                    return ((this->*formFunc[i])(target));
                }
                i++;
            }
        throw WrongFormNameException();
        return NULL;

    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
}
