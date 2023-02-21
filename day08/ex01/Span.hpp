#ifndef __SPAN_HPP__
#define __SPAN_HPP__
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
    public:
        size_t N;
        std::vector<int> _vec;
    public:
        Span();
        Span(size_t n);
        Span(Span const & other);
        Span &operator=(Span const & other);
        ~Span();

        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
        void    fill_vec();
};

#endif