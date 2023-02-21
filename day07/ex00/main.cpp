#include "header.hpp"

int main()
{
    int a1 = 1, b1 = 2;
    swap(a1, b1);
    std::cout << a1 << " " << b1 << " " << max(a1, b1) << " " << min(a1, b1) << std::endl;
    char a2 = 'a', b2 = 'b';
    swap(a2, b2);
    std::cout << a2 << " " << b2 << " " << max(a2, b2) << " " << min(a2, b2) << std::endl;
    std::string a3 = "aa", b3 = "bb";
    swap(a3, b3);
    std::cout << a3 << " " << b3 << " " << max(a3, b3) << " " << min(a3, b3) << std::endl;
    double a4 = 1.1, b4 = 2.2;
    swap(a4, b4);
    std::cout << a4 << " " << b4 << " " << max(a4, b4) << " " << min(a4, b4) << std::endl;
    return 0;
}