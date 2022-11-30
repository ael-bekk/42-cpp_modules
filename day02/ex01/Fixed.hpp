#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>
#define FRACTION 8

class Fixed {

    private:
        int fixed;
        static const int fraction;
    
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(Fixed const & object);
        Fixed &operator=(Fixed const & object);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & out, Fixed const & object);

#endif