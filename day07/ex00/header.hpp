#ifndef __HEADER_H__
#define __HEADER_H__

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b) {
    T _swp = a;
    a = b;
    b = _swp;
}

template <typename T>
T &max(T &a, T &b) {
    return (a > b) ? a : b;
}

template <typename T>
T &min(T &a, T &b) {
    return (a < b) ? a : b;
}

#endif