#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#define FRACTION 8

class Fixed {

    private:
        int fixed;
        static const int fraction;
    
    public:
        Fixed();
        Fixed(Fixed& object);
        Fixed &operator=(Fixed & object);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif