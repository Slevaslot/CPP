#include "Fixed.hpp"

int main( void ) {
    Fixed a( Fixed(10) - Fixed(5));

    std::cout << a << std::endl;
    return 0;
}
