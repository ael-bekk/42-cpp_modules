#include "Iter.hpp"

int main()
{
    int a1[5] = {1,23,40,50,100};
    iter(a1, 5, _print);
    char a2[3] = {'1','2','a'};
    iter(a2, 5, _print);
    std::string a3[8] = {"1","23g","40","50hhh","100hjkljkljk"};
    iter(a3, 5, _print);
    double a4[5] = {1.1,23.2,40.3,50.4,100.5};
    iter(a4, 5, _print);
    return 0;
}