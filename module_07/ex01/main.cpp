//
// Created by mtriston on 06.02.2021.
//

#include "iter.hpp"
#include <iostream>
#include <string>

class Awesome {
public:
    Awesome(): _n(42) {}
    Awesome(int n): _n(n) {}
    int get() const { return _n; };
    bool operator==(Awesome const &rhs) const { return this->_n == rhs._n; }
    bool operator!=(Awesome const &rhs) const { return this->_n != rhs._n; }
    bool operator>(Awesome const &rhs) const { return this->_n > rhs._n; }
    bool operator<(Awesome const &rhs) const { return this->_n < rhs._n; }
    bool operator>=(Awesome const &rhs) const { return this->_n >= rhs._n; }
    bool operator<=(Awesome const &rhs) const { return this->_n <= rhs._n; }
private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const &rhs) {o << rhs.get(); return o; }

template <typename T> void print(T const & x) { std::cout << x << std::endl; }

int main() {

    {
        std::string tab2[] = {"Hello", "World", "Bye", "Nice"};
        iter(tab2, 4, print);
    }
    {
        std::cout << "Tests form check-list" << std::endl;
        int tab[] = { 0, 1, 2, 3, 4 };
        Awesome tab2[5];

        iter(tab, 5, print);
        iter(tab2, 5, print);
    }
    return (0);
}