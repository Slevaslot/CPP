#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default Constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(const int value) {
    std::cout << "Int Constructor called" << std::endl;
    this->_fixed = value << _stock;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float Constructor called" << std::endl;
    _fixed = roundf(value * (float)(1 << _stock));
}

Fixed::Fixed(const Fixed& t) {
    std::cout << "Copy constructor called" << std::endl;
    *this = t;
}

Fixed& Fixed::operator=(const Fixed &t) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed = t._fixed;
    return (*this);
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixe){
        os << fixe.toFloat();
        return os;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    this->_fixed = 0;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits called" << std::endl;
    return this->_fixed;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits called" << std::endl;
    this->_fixed = raw;
}

int Fixed::toInt(void) const {
    int nb;
    nb = this->_fixed >> this->_stock;
    return (nb);
}

float Fixed::toFloat(void) const {
    float nb;

    nb = (float)_fixed / (1 << _stock);
    return (nb);
}
