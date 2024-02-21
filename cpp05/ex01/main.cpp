#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(void) {
    try {
        Bureaucrat Albert("Ablert" , 42);
        Form test("test", 42, 5);
        Albert.signForm(test);
    }
    catch (const std::exception & str) {
        std::cerr << "error: " << str.what() << std::endl;
    }
    try {
        Bureaucrat Albert("Ablert" , 42);
        Form test("test", 17, 5);
        Albert.signForm(test);
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
    try {
        Form Test("test" , 151, 1);
    }
    catch (const std::exception & str) {
        std::cerr << "error: " << str.what() << std::endl;
    }
}