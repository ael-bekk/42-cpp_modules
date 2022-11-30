#pragma once
#ifndef __POINT_CPP__
#define __POINT_CPP__
#include <cmath>
#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;

    public:
        Point();
        Point(float const x, float const y);
        Point(Point const & p);
        Point &operator=(Point const & p);
        ~Point();

        Fixed get_x() const;
        Fixed get_y() const;

};

Fixed distance(Point a, Point b);
Fixed calc_area(Fixed const &a, Fixed const &b, Fixed const &c, Fixed const &s);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif