#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <new>
#include <stdio.h>
#include <string.h>

class Fixed {

    private :

    int _value;
    static const int _value2 = 8;

    public :
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed();
    Fixed(const Fixed& t);
    Fixed(const int value);
    Fixed &operator=(const Fixed &t);
    ~Fixed();
};

#endif