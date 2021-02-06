//
// Created by mtriston on 06.02.2021.
//

#ifndef CPP_MODULE_ITER_HPP
#define CPP_MODULE_ITER_HPP

template <typename T>
void iter(T * array, int length, void (*f)(T const & element)) {

    for (int i = 0; i < length; ++i) {
        f(array[i]);
    }
}

#endif //CPP_MODULE_ITER_HPP
