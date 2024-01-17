#include "Fixed.hpp"

Fixed::Fixed(void) {
    // std::cout << "Default Constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(const int value) {
    // std::cout << "Int Constructor called" << std::endl;
    this->_fixed = value << _stock;
}

Fixed::Fixed(const float value)
{
    // std::cout << "Float Constructor called" << std::endl;
    _fixed = roundf(value * (float)(1 << _stock));

}

Fixed::Fixed(const Fixed& t) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = t;
}

Fixed& Fixed::operator=(const Fixed &t) {
    // std::cout << "Copy assignment operator called" << std::endl;
    _fixed = t._fixed;
    return (*this);
}

Fixed Fixed::operator+(const Fixed &Fixed2) {
    Fixed   tmp;
    tmp.setRawBits((toFloat() + Fixed2.toFloat()) * (float)(1 << _stock));
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &Fixed2) {
    Fixed   tmp;
    tmp.setRawBits((toFloat() - Fixed2.toFloat()) * (float)(1 << _stock));
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &Fixed2) {
    Fixed   tmp;
    tmp.setRawBits((toFloat() * Fixed2.toFloat()) * (float)(1 << _stock));
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &Fixed2) {
    Fixed   tmp;
    tmp.setRawBits((toFloat() / Fixed2.toFloat()) * (float)(1 << _stock));
    return (tmp);
}

bool Fixed::operator==(const Fixed &Fixed2) {
    if (_fixed == Fixed2._fixed)
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(const Fixed &Fixed2) {
    if (_fixed != Fixed2._fixed)
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(const Fixed &Fixed2) {
    if (_fixed >= Fixed2._fixed)
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(const Fixed &Fixed2) {
    if (_fixed <= Fixed2._fixed)
        return (true);
    else
        return (false);
}

bool Fixed::operator>(const Fixed &Fixed2) {
    if (_fixed > Fixed2._fixed)
        return (true);
    else
        return (false);
}

bool Fixed::operator<(const Fixed &Fixed2) {
    if (_fixed < Fixed2._fixed)
        return (true);
    else
        return (false);
}

Fixed& Fixed::operator++() {
    _fixed += 1;
    return (*this);
}

Fixed& Fixed::operator--() {
    _fixed -= 1;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed nbr(*this);
    ++_fixed;
    return (nbr);
}

Fixed Fixed::operator--(int) {
    Fixed nbr(*this);
    --_fixed;
    return (nbr);
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixe){
        os << fixe.toFloat();
        return os;
}

float Fixed::min(Fixed &Fixed1,  Fixed &Fixed2) {
    if (Fixed1 < Fixed2)
        return (Fixed1.toFloat());
    else
        return (Fixed2.toFloat());
}

float Fixed::max(Fixed &Fixed1,  Fixed &Fixed2) {
    if (Fixed1 < Fixed2)
        return (Fixed2.toFloat());
    else
        return (Fixed1.toFloat());
}

float Fixed::min(const Fixed &Fixed1,  const Fixed &Fixed2) {
    if (Fixed1.getRawBits() < Fixed2.getRawBits())
        return (Fixed1.toFloat());
    else
        return (Fixed2.toFloat());
}

float Fixed::max(const Fixed &Fixed1,  const Fixed &Fixed2) {
    if (Fixed1.getRawBits() < Fixed2.getRawBits())
        return (Fixed2.toFloat());
    else
        return (Fixed1.toFloat());
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
    _fixed = 0;
}

int Fixed::getRawBits(void) const {
    // std::cout << "getRawBits called" << std::endl;
    return _fixed;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits called" << std::endl;
    _fixed = raw;
}

int Fixed::toInt(void) const {
    int nb;
    nb = _fixed >> _stock;
    return (nb);
}

float Fixed::toFloat(void) const {
    float nb;

    nb = (float)_fixed / (1 << _stock);
    return (nb);
}
