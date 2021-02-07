//
// Created by mtriston on 06.02.2021.
//

#include "Span.hpp"

int main()
{
    {
        std::cout << "___From subject___" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "___Additional tests___" << std::endl;

        Span a(10);
        a.addNumber(1, 2000, 333);
        std::cout << "'a' capacity: " << a.getArray().capacity() << std::endl;
        std::cout << "'a' longestSpan: " << a.longestSpan() << std::endl;
        std::cout << "'a' shortestSpan: " << a.shortestSpan() << std::endl;
        std::cout << "'a' elements:" << std::endl;
        for (int n : a.getArray())
            std::cout << n << std::endl;
        Span b(a);
        a = b;
        std::cout << "'a' after copy contructor and assignment operator" << std::endl;
        std::cout << "'a' capacity: " << a.getArray().capacity() << std::endl;
        std::cout << "'a' longestSpan: " << a.longestSpan() << std::endl;
        std::cout << "'a' shortestSpan: " << a.shortestSpan() << std::endl;
        std::cout << "'a' elements:" << std::endl;
        for (int n : a.getArray())
            std::cout << n << std::endl;
        std::cout << "Testing exceptions" << std::endl;
        try {
            std::cout << "trying to overflow container..." << std::endl;
            a.addNumber(1, 1000, 10);
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
        Span c(1);
        try {
            std::cout << "trying to calculate span with blank container..." << std::endl;
            std::cout << c.shortestSpan() << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
        c.addNumber(2);
        try {
            std::cout << "trying to calculate span with only one element in container..." << std::endl;
            std::cout << c.longestSpan() << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
    }
    return (0);
}
