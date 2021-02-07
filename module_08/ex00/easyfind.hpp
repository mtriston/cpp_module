//
// Created by mtriston on 06.02.2021.
//

#ifndef CPP_MODULE_EASYFIND_HPP
#define CPP_MODULE_EASYFIND_HPP
#include <algorithm>
#include <vector>
#include <exception>

class notFoundException : public std::exception {
public:
    virtual const char *what() const throw() {
        return "The element not found";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int value) {

    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw notFoundException();
    }
    return it;
}

#endif //CPP_MODULE_EASYFIND_HPP
