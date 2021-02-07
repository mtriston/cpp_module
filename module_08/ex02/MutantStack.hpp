//
// Created by mtriston on 07.02.2021.
//

#ifndef CPP_MODULE_MUTANTSTACK_HPP
#define CPP_MODULE_MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:
    MutantStack() {}
    virtual ~MutantStack() {}
    MutantStack(MutantStack<T> const &a) { *this = a; }
    MutantStack<T> &operator=(MutantStack<T> const &a) {
        if (this != &a) {
            this->c = a.c;
        }
        return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.cbegin(); }
    const_iterator end() const { return this->c.cend(); }

};


#endif //CPP_MODULE_MUTANTSTACK_HPP
