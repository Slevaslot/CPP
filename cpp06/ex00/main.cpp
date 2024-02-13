#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac != 2 || av[1][0] == '\0') {
        std::cout << "Wrong number of parameter" << std::endl;
        return 0;
    }
    std::string argv = av[1];
    ScalarConverter::convert(argv);
}
