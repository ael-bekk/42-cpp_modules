#include "Point.hpp"

Point::Point():x(0), y(0) {}

Point::Point(float const x, float const y):x(x),y(y) {}

Point::Point(Point const & p) {
    *this = p;
}

Point &Point::operator=(Point const & p) {
    this->x = p.x;
    this->y = p.y;
    return *this;
}

Point::~Point() {

}

Fixed Point::get_x() const{
    return this->x;
}

Fixed Point::get_y() const{
    return this->y;
}

