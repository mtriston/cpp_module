//
// Created by mtriston on 06.02.2021.
//

#include "whatever.hpp"
#include <iostream>
#include <string>

class Awesome {
public:
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

int main( void ) {

    {
        int a = 2;
        int b = 3;
        ::swap(a, b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
        std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    }

    {
        std::cout << "Testing with classes" << std::endl;
        Awesome c(111);
        Awesome d(999);
        std::cout << "before swap: c = " << c << ", d = " << d << std::endl;
        ::swap(c, d);
        std::cout << "after swap: c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
        std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    }
    return 0;
}