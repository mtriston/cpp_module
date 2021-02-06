//
// Created by mtriston on 06.02.2021.
//

#ifndef CPP_MODULE_WHATEVER_HPP
#define CPP_MODULE_WHATEVER_HPP


template <typename T>
void swap(T & first, T & second) {

    T temp = first;
    first = second;
    second = temp;
}

template <typename T>
T & min(T & first, T & second) { return (first < second ? first : second); }

template <typename T>
T & max(T & first, T & second) { return (first > second ? first : second); }

#endif //CPP_MODULE_WHATEVER_HPP
