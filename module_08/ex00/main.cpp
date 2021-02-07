//
// Created by mtriston on 06.02.2021.
//

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

int main() {

    {
        std::cout << "Testing vector" << std::endl;
        std::vector<int> a = {11, 22, 33, 44, 55, 66, 77, 88 };
        try {
            auto it  = easyfind(a, 11);
            std::cout << "index: " << it - a.begin() << "  value: " << *it << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
        try {
            auto it  = easyfind(a, 111);
            std::cout << "index: " << it - a.begin() << "\nvalue: " << *it << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
    }
    {
        std::cout << "Testing deque" << std::endl;
        std::deque<int> a = {11, 22, 33, 44, 55, 66, 77, 88 };
        try {
            auto it  = easyfind(a, 11);
            std::cout << "index: " << it - a.begin() << "  value: " << *it << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
        try {
            auto it  = easyfind(a, 111);
            std::cout << "index: " << it - a.begin() << "\nvalue: " << *it << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
    }
    {
        std::cout << "Testing list" << std::endl;
        std::list<int> a = {11, 22, 33, 44, 55, 66, 77, 88 };
        try {
            auto it  = easyfind(a, 11);
            std::cout << "value: " << *it << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
        try {
            auto it  = easyfind(a, 111);
            std::cout << "value: " << *it << std::endl;
        } catch (std::exception & e) { std::cout << e.what() << std::endl; }
    }

}