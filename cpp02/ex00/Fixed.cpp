#include "Fixed.hpp"

Fixed::~Fixed() {
    std::cout << "Destructor has been called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits has been called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits has been called" << std::endl;
    this->_value = raw;
}

Fixed::Fixed(void) {
    std::cout << "Default Constructor has been called" << std::endl;
    this->_value = 0;
}

Fixed& Fixed::operator=(const Fixed &t) {
    std::cout << "Copy assignment operator has been called" << std::endl;
    this->_value = t._value;
    return (*this);
}

Fixed::Fixed(const Fixed& t) {
    *this = t;
    std::cout << "Copy constructor has been called" << std::endl;
}