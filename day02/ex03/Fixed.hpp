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
        Fixed ();
        Fixed (const int nb);
        Fixed (const float nb);

        Fixed (Fixed const & object);

        Fixed &operator = (Fixed const & object);

        ~Fixed ();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        bool    operator > (const Fixed  & obj) const;
        bool    operator < (Fixed const & obj) const;
        bool    operator >= (Fixed const & obj) const;
        bool    operator <= (Fixed const & obj) const;
        bool    operator == (Fixed const & obj) const;
        bool    operator != (Fixed const & obj) const;

        Fixed   operator + (Fixed const & obj) const;
        Fixed   operator + () const;
        Fixed   operator - (Fixed const & obj) const;
        Fixed   operator - () const;
        Fixed   operator * (Fixed const & obj) const;
        Fixed   operator / (Fixed const & obj) const;

        Fixed    &operator ++ ();
        Fixed    operator ++ (int);
        Fixed    &operator -- ();
        Fixed    operator -- (int);

        static Fixed const   &min(Fixed & obj, Fixed & obj2);
        static Fixed const   &min(Fixed const & obj, Fixed const & obj2);

        static Fixed const   &max(Fixed & obj, Fixed & obj2);
        static Fixed const   &max(Fixed const & obj, Fixed const & obj2);

};

std::ostream & operator<<(std::ostream & out, Fixed const & object);

#endif