#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.fill_vec();
    for (int i = 0; i < 5; i++)
        std::cout  << sp._vec[i] << " ";
    std::cout << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try { sp.addNumber(3); }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}