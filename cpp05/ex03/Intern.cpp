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

void Intern::WrongFormNameException() {
    throw std::invalid_argument("invalid name for the Form");
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
        this->WrongFormNameException();
        return NULL;

    }
    catch (std::invalid_argument & e) {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
}
