#include "Span.hpp"

int main()
{
    try {
        Span sp = Span(5);
    
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::length_error & e) {
        std::cerr << e.what();
    }
    try {
        Span sp = Span(100000);
        std::vector<int> test;

		for (int i = 1; i <= 100000; i++)
			test.push_back(i);
        sp.addNumber(test.begin(), test.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::length_error & e) {
        std::cerr << e.what();
    }
    try {
        Span sp = Span(1);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::length_error & e) {
        std::cerr << e.what();
    }
    return 0;
}
