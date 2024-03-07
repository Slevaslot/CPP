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
    char ch;
    int in;
    double dou = strtod(input.c_str(), NULL);

    c << input;
    c >> ch;
    in = static_cast<int>(dou);
    if ((ch >= '0' && ch <= '9') || ((ch == '-' && in <= 0) || (ch == '+' && in)) || ((input == "nan") || (input == "inf") || (input == "-inf") || (input == "+inf")))
    {
        size_t i = input.find(".", 0);
        if (i != std::string::npos)
        {
            const char *str = input.c_str();
            while (str[++i] >= '0' && str[i] <= '9')
                ;
            if (!str[i] || str[i] == 'f')
                std::cout << "char: '*'" << std::endl;
        }
        else if ((input == "nan") || (input == "inf") || (input == "-inf") || (input == "+inf"))
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        if (input == "nan" || input == "inf" || input == "-inf" || input == "+inf")
        {
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << static_cast<float>(dou) << "f" << std::endl;
            std::cout << "double: " << dou << std::endl;
        }
        else
        {
            std::cout << "int: " << in << std::endl;
            if (in >= 1000000 || in <= -1000000)
            {
                std::cout << "float: " << static_cast<float>(dou) << "f" << std::endl;
                std::cout << "double: " << dou << std::endl;
            }
            else
            {
                std::cout << "float: " << static_cast<float>(dou) << ".0f" << std::endl;
                std::cout << "double: " << dou << ".0" << std::endl;
            }
        }
    }
    else if (input.length() == 1) {
        std::cout << "char: " << ch << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else if (input.length() > 1) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}
