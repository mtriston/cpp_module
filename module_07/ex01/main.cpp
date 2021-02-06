//
// Created by mtriston on 06.02.2021.
//

#include "iter.hpp"
#include <iostream>
#include <string>

void print(int const & x) { std::cout << x << std::endl; }
void print(std::string const & x) { std::cout << x << std::endl; }

int main() {

    int tab[] = { 0, 1, 2, 3, 4 };
    iter(tab, 5, print);

    std::string tab2[] = { "Hello", "World", "Bye", "Nice" };
    iter(tab2, 4, print);
    return (0);
}