#ifndef FIXED_HPP
# define FIXED_HPP

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
    Fixed();
    Fixed(const Fixed& t);
    Fixed &operator=(const Fixed &t);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
