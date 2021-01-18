#include "Sorcerer.hpp"
//TODO: copy and =
Sorcerer::Sorcerer(std::string const & name, std::string const & title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}
std::string const & Sorcerer::getName() const { return (_name); }

std::string const & Sorcerer::getTitle() const { return (_title); }

std::ostream & operator << (std::ostream &os, const Sorcerer &p)
{
    return (os << "I am " << p.getName() << ", " << p.getTitle() << ", and I like ponies!" << std::endl);
}