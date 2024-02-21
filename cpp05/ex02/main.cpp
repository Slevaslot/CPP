#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    try {
        Bureaucrat Albert("Ablert" , 5);
        RobotomyRequestForm test1("sbire");
        PresidentialPardonForm test2("Albert");
        ShruberryCreationForm test3("garden");
        Albert.signForm(test1);
        Albert.signForm(test2);
        Albert.signForm(test3);
        Albert.executeForm(test1);
        Albert.executeForm(test1);
        Albert.executeForm(test2);
        Albert.executeForm(test3);
    }
    catch (const std::exception & str) {
        std::cerr << "error: " << str.what() << std::endl;
    }
    try {
        Bureaucrat Albert("Ablert", 42);
    }
    catch (const std::exception & str) {
        std::cerr << "error: " << str.what() << std::endl;
    }
    try {
        Bureaucrat Test("test" , 0);
    }
    catch (const std::exception & str) {
        std::cerr << "error: " << str.what() << std::endl;
    }
}