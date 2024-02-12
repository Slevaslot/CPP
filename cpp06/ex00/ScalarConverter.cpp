#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::~ScalarConverter() {

}

ScalarConverter::ScalarConverter(const ScalarConverter & truc) {
    *this = truc;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& truc) {
    (void)truc;
    return *this;
}

void ScalarConverter::convert(std::string input) {
    std::stringstream c;
    std::stringstream i;
    std::stringstream d;
    std::stringstream f;
    char ch;
    int in;
    double dou;
    float fl;

    c << input;
    i << input;
    d << input;
    f << input;
    c >> ch;
    i >> in;
    d >> dou;
    f >> fl;
    if ((ch >= '0' && ch <= '9') || ((ch == '-' && in < 0) || (ch == '+' && in)) || ((input == "nan") || (input == "-inf") || (input == "+inf"))) {
        std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << in << std::endl;
        if (in >= 1000000 || in <= -1000000)
        {
            std::cout << "float: " << fl << "f" << std::endl;
            std::cout << "double: " << dou << std::endl;
        }
        else
        {
            std::cout << "float: " << fl << ".0f" << std::endl;
            std::cout << "double: " << dou << ".0" << std::endl;
        }
    }
    else if (input.length() == 1) {
        std::cout << "char: " << ch << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    }
    else if (input.length() > 1) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    }
    else {
        std::cout << "char: " << ch << std::endl;
        std::cout << "int: " << in << std::endl;
        std::cout << "float: " << fl << ".0f" << std::endl;
        std::cout << "double: " << dou << ".0" << std::endl;
    }
}