#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__
#include <algorithm>
#include <iostream>

template <class T>
void easyfind(T arr, int n) {
    if (std::find(arr.begin(), arr.end(), n) != arr.end())
        std::cout << "exist\n";
    else
        throw (std::out_of_range("doesn't exist"));
}

#endif