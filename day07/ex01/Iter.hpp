#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>
#include <string>

template <typename T>
void    _print(T elm) {
    std::cout << elm << " ";
}

template <typename T>
void    iter(T *array, size_t len, void (*func)(const T &)) {
    for (size_t i = 0; i < len; i++)
        func(array[i]);
    std::cout << std::endl;
}


#endif