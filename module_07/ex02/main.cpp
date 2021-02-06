//
// Created by mtriston on 06.02.2021.
//

#include "array.hpp"
#include <iostream>
#include <string>

int main() {

    {
        std::cout << "Check blank int array" << std::endl;
        Array<int> a;
        Array<int> const b(a);
        a = b;
        std::cout << "a size = " << a.size() << " b size = " << b.size() << std::endl;
    }
    {
        std::cout << "Check not-blank int array" << std::endl;
        Array<int> a(10);
        a[0] = 666;
        a[9] = 777;
        Array<int> const b(a);
        std::cout << "a size = " << a.size() << " b(const) size = " << b.size() << std::endl;
        std::cout << "a[0] = " << a[0] << " b[0](const) = " << b[0] << std::endl;

        a = b;
    }
    {
        std::cout << "Check blank string array" << std::endl;
        Array<std::string> a;
        Array<std::string> const b(a);
        a = b;
        std::cout << "a size = " << a.size() << " b size = " << b.size() << std::endl;
    }
    {
        std::cout << "Check not-blank string array" << std::endl;
        Array<std::string> a(10);
        a[0] = "Hello";
        a[9] = "World";
        Array<std::string> const b(a);
        std::cout << "a size = " << a.size() << " b(const) size = " << b.size() << std::endl;
        std::cout << "a[0] = " << a[0] << " b[0](const) = " << b[0] << std::endl;

        a = b;
    }
    {
        std::cout << "Check exception" << std::endl;
        Array<int> a(10);
        try {
            std::cout << "a[10] = " << a[10] << std::endl;
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }



    return (0);
}
