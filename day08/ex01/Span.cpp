#include "Span.hpp"

Span::Span() {}

Span::Span(size_t n) : N(n) {}

Span::Span(Span const & other) {
    *this = other;
}

Span &Span::operator=(Span const & other) {
    N = other.N;
    _vec = other._vec;
    return *this;
}

Span::~Span() {}

void    Span::addNumber(int n) {
    if (N == _vec.size())
        throw (std::out_of_range("Span is full."));
    _vec.push_back(n);
    std::sort(_vec.begin(), _vec.end());
}

int     Span::shortestSpan() {
    if (_vec.size() < 2)
        throw (std::out_of_range("can't be calculated"));
    int shortest = _vec[1] - _vec[0];
    for (size_t i = 1; i < N - 1; i++)
        if (_vec[i + 1] - _vec[i] < shortest)
            shortest = _vec[i + 1] - _vec[i];
    return shortest;
}

int     Span::longestSpan() {
    if (_vec.size() < 2)
        throw (std::out_of_range("can't be calculated"));
    return (_vec[_vec.size() - 1] - _vec[0]);
}

void    Span::fill_vec() {
    std::vector<int>::iterator it = _vec.begin() + _vec.size();
    std::vector<int>::iterator st = it;
    int size = N - _vec.size();
    srand(time(NULL));
    for (;it - st < size; it++)
        addNumber(rand() %  100);
}