#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat Albert("Ablert" , 42);
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
        Bureaucrat Test("test" , 151);
    }
    catch (const std::exception & str) {
        std::cerr << "error: " << str.what() << std::endl;
    }
}