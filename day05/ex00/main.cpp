#include "Bureaucrat.hpp"

int main()
{
    // try {
    //     throw "asfdsf";
    // }
    // catch (std::exception &e) {
    //     std::cout << "1 :" << e.what() << std::endl;
    // }
    // catch (const char *e) {
    //     std::cout << "2 :" << e << std::endl;
    // }
    try
    {
        Bureaucrat b1("B1", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b2("B2", 150);
        std::cout << b2 << std::endl;
        b2.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b3("B3", 0);
        std::cout << b3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b4("B4", 151);
        std::cout << b4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}