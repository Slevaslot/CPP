#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {
    try {
        Bureaucrat Albert("Ablert" , 5);
        Intern     test;
        AForm *f1 = test.makeForm("PresidentialPardonForm", "test1");
        AForm *f2 = test.makeForm("ShruberryCreationForm", "test2");
        AForm *f3 = test.makeForm("RobotomyRequestForm", "test3");
        Albert.signForm(*f1);
        Albert.signForm(*f2);
        Albert.signForm(*f3);
        Albert.executeForm(*f1);
        Albert.executeForm(*f3);
        Albert.executeForm(*f2);
        Albert.executeForm(*f3);
        delete (f1);
        delete (f2);
        delete (f3);
    }
    catch (const std::invalid_argument & str) {
        std::cerr << "error: " << str.what();
    }
    try {
        Bureaucrat Albert("Ablert", 42);
    }
    catch (const std::invalid_argument & str) {
        std::cerr << "error: " << str.what();
    }
    try {
        Bureaucrat Test("test" , 0);
    }
    catch (const std::invalid_argument & str) {
        std::cerr << "error: " << str.what();
    }
}