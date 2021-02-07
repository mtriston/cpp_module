//
// Created by mtriston on 07.02.2021.
//
#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "mstack.top() = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "mstack.size() = " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "___Additional tests___" << std::endl;
    std::cout << "s.top() = " << s.top() << std::endl;
    std::cout << "mstack.top() = " << mstack.top() << std::endl;

    MutantStack<int> x(mstack);
    mstack = x;
    std::cout << "mstack after copy constructor and assignment operator" << std::endl;
    it = mstack.begin();
    ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    {
        std::cout << "MutantStack with std::string" << std::endl;
        MutantStack<std::string> ms;
        ms.push("Hello");
        ms.push("World");
        MutantStack<std::string>::iterator it = ms.begin();
        MutantStack<std::string>::iterator ite = ms.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;
}