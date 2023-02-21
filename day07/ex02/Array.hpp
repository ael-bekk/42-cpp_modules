#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
#include <string>

template <class T>
class Array {
    private:
        size_t  _size;
        T       *_arr;
    public:
        Array() {
            _size = 0;
            _arr  = new T[_size];
        }

        Array(size_t n) {
            _size = n;
            _arr = new T[n];
        }
        Array(Array const &other) {
            this->_size = 0;
            this->_arr = NULL;
            *this = other;
        }
        Array &operator=(Array const &other) {
            delete [] this->_arr;
            this->_size = other._size;
            this->_arr = new T[this->_size];
            for (size_t i = 0; i < this->_size; i++)
                this->_arr[i] = other._arr[i];
            return  *this;
        }
        ~Array() {
            delete [] this->_arr;
        }
        T &operator[](size_t n) {
            if (n < 0 || n > this->_size)
                throw std::out_of_range("out of range");
            return this->_arr[n];
        }
        const T &operator[](size_t n) const {
            if (n < 0 || n > this->_size)
                throw std::out_of_range("out of range");
            return this->_arr[n];
        }
        size_t size() const {
            return this->_size;
        }
};



#endif