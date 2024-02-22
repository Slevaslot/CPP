#include "Span.hpp"

int main()
{
    try {
        Span sp = Span(0);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::invalid_argument & str) {
        std::cerr << str.what();
    }
    return 0;
}
