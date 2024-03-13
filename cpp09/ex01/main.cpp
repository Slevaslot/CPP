#include "RPN.hpp"

int main(int ac, char **av) {
    try {
        if (ac == 2 && av[1][0] != '\0') {
            std::string arg = av[1];
            RPN rpn(arg);
            std::cout << rpn.calculate() << std::endl;
        }
        else
            throw std::invalid_argument("Wrong number of argument in input: 1 argument expected");        
    }
    catch (std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }
}