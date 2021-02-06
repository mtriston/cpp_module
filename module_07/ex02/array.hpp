//
// Created by mtriston on 06.02.2021.
//

#ifndef CPP_MODULE_ARRAY_HPP
#define CPP_MODULE_ARRAY_HPP

#include <exception>

template<typename T> class Array {

private:
    unsigned int    size_;
    T*              array_;

public:
    Array();
    Array(unsigned int size);
    Array(Array const &);
    ~Array();

    Array &operator=(Array const &);
    T const &operator[](const unsigned int index) const;
    T &operator[](const int unsigned index);

    unsigned int size() const;

    class elementOutOfLimits : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

template<typename T>
const char * Array<T>::elementOutOfLimits::what() const throw() { return "The element is out of the limits"; }

template<typename T>
Array<T>::Array() : size_(0), array_(0) {}

template<typename T>
Array<T>::Array(unsigned int size) : size_(size), array_(0) {
    if (size_ > 0) {
        array_ = new T[size_];
    }
}

template<typename T>
Array<T>::Array(Array const & a) {

    size_ = 0;
    array_ = 0;
    *this = a;
}

template<typename T>
Array< T >::~Array() {

    if (size_ > 0) {
        delete [] array_;
    }
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & a) {

    if (this != &a) {
        if (size_ > 0) {
            delete [] array_;
        }
        size_ = a.size_;
        array_ = 0;
        if (size_ > 0) {
            array_ = new T[size_];
            for (unsigned i = 0; i < size_; ++i) {
                array_[i] = a.array_[i];
            }
        }
    }
    return (*this);
}

template<typename T>
T & Array<T>::operator[](unsigned int const index) {

    if (index >= size_)
        throw elementOutOfLimits();
    else
        return (array_[index]);
}

template<typename T>
T const & Array<T>::operator[](unsigned int const index) const {

    if (index >= size_)
        throw elementOutOfLimits();
    else
        return (array_[index]);
}

template<typename T>
unsigned int Array<T>::size() const { return (size_); }

#endif //CPP_MODULE_ARRAY_HPP
