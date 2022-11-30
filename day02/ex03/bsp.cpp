#include "Point.hpp"

Fixed distance(Point a, Point b) {

    return sqrtf(((a.get_x() - b.get_x()) * (a.get_x() - b.get_x())
                + (a.get_y() - b.get_y()) * (a.get_y() - b.get_y())).toFloat());
}

Fixed calc_area(Fixed const &a, Fixed const &b, Fixed const &c, Fixed const &s) {

    return roundf(sqrtf((s * (s - a) * (s - b) * (s - c)).toFloat()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    
    Fixed d1, d2, d3;
    Fixed s, s1, s2, s3;
    Fixed area, area1, area2, area3;

    d1 = distance(a, b);
    d2 = distance(b, c);
    d3 = distance(c, a);
    s = (d1 + d2 + d3) / 2;
    area = calc_area(d1, d2, d3, s);

    d1 = distance(a, point);
    d2 = distance(point, c);
    d3 = distance(c, a);
    s = (d1 + d2 + d3) / 2;
    area1 = calc_area(d1, d2, d3, s);

    d1 = distance(point, b);
    d2 = distance(b, c);
    d3 = distance(c, point);
    s = (d1 + d2 + d3) / 2;
    area2 = calc_area(d1, d2, d3, s);

    d1 = distance(a, b);
    d2 = distance(b, point);
    d3 = distance(point, a);
    s = (d1 + d2 + d3) / 2;
    area3 = calc_area(d1, d2, d3, s);

    return area == area1 + area2 + area3;
}