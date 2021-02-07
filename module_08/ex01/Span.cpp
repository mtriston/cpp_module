//
// Created by mtriston on 06.02.2021.
//

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int size) : size_(size), array_(std::vector<int>(0)) { array_.reserve(size); }

Span::Span(const Span &a) { *this = a; }

Span &Span::operator=(Span const &a) {

    if (this != &a) {
        size_ = a.size_;
        array_.reserve(size_);
        array_ = a.array_;
    }
    return (*this);
}

void Span::addNumber(int number) {

    if (array_.size() == size_)
        throw fullContainerException();
    else
        array_.push_back(number);
}

void Span::addNumber(int first, int last, int step) {

    for (int i = first; i <= last; i += step) {
        if (array_.size() == size_)
            throw fullContainerException();
        else
            array_.push_back(i);
    }
}

std::vector<int> const &Span::getArray() const { return (array_); }

int Span::shortestSpan() {

    if (array_.size() <= 1)
        throw noSpanToFindException();
    std::partial_sort(array_.begin(), array_.begin()+ 1,array_.end());
    return (array_.at(1) - array_.at(0));
}

int Span::longestSpan() {
    if (array_.size() <= 1)
        throw noSpanToFindException();
    std::vector<int>::const_iterator itMax = std::max_element(array_.begin(), array_.end());
    std::vector<int>::const_iterator itMin = std::min_element(array_.begin(), array_.end());
    return (*itMax - *itMin);
}

const char *Span::fullContainerException::what() const throw() {
    return ("Contrainer is full!");
}

const char *Span::noSpanToFindException::what() const throw() {
    return ("There is no span to find");
}