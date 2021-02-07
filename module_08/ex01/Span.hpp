//
// Created by mtriston on 06.02.2021.
//

#ifndef CPP_MODULE_SPAN_HPP
#define CPP_MODULE_SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span {
private:
    unsigned            size_;
    std::vector<int>    array_;
    Span();
public:
    Span(unsigned size);
    Span(Span const &);
    ~Span();
    Span &operator=(Span const &);

    void addNumber(int);
    void addNumber(int, int, int);
    int shortestSpan();
    int longestSpan();

    std::vector<int> const &getArray() const;

    class fullContainerException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class noSpanToFindException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};


#endif //CPP_MODULE_SPAN_HPP
