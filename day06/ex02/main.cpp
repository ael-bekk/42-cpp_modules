#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h> 

Base * generate(void) {
    
    srand(time(NULL));
    int r = rand() % 3;
    if (!r--)
        return new A;
    if (!r--)
        return new B;
    return new C;
}

void identify(Base* p) {

    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p) {

    try {
        A u = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::exception & e) {}
    try {
        B u = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::exception & e) {}
    try {
        C u = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    A l;    
    identify(l);
    return 0;
}