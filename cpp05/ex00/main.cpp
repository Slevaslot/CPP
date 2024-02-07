#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat Albert("Ablert" , 42);
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
    try {
        Bureaucrat Test("test" , 151);
    }
    catch (const std::invalid_argument & str) {
        std::cerr << "error: " << str.what();
    }
}