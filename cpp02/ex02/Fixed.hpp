#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <new>
#include <cmath>
#include <stdio.h>
#include <string.h>

class Fixed {

    private :

    int _fixed;
    static const int _stock = 8;

    public :
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed();
    Fixed(const Fixed& t);
    Fixed(const int value);
    Fixed(const float value);
    Fixed &operator=(const Fixed &t);
    Fixed &operator+(const Fixed &Fixed2);
    Fixed &operator-(const Fixed &Fixed2);
    Fixed &operator*(const Fixed &Fixed2);
    Fixed &operator/(const Fixed &Fixed2);
    Fixed &operator
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixe);


#endif