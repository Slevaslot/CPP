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
    Fixed operator+(const Fixed &Fixed2);
    Fixed operator-(const Fixed &Fixed2);
    Fixed operator*(const Fixed &Fixed2);
    Fixed operator/(const Fixed &Fixed2);

    bool  operator==(const Fixed &Fixed2);
    bool  operator!=(const Fixed &Fixed2);
    bool  operator>=(const Fixed &Fixed2);
    bool  operator<=(const Fixed &Fixed2);
    bool  operator>(const Fixed &Fixed2);
    bool  operator<(const Fixed &Fixed2);

    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static float min(Fixed &Fixed1,  Fixed &Fixed2);
    static float max(Fixed &Fixed1,  Fixed &Fixed2);
    static float min(const Fixed &Fixed1, const Fixed &Fixed2);
    static float max(const Fixed &Fixed1, const Fixed &Fixed2);

    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixe);


#endif
