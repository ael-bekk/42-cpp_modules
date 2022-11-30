#include "Point.hpp"
#include <limits.h>

int main( void )
{
    Point a(1.02, 5.22), b(0.48, 0.93), c(3.14, 0.96);
    Point in(1.4, 2.56), out(3.68, 4.36);

    std::cout << bsp(a, b, c , out) << std::endl;
    std::cout << bsp(a, b, c , in) << std::endl;
    return 0;
}
