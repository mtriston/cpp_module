#include "Victim.hpp"

//TODO: copy and =
Victim::Victim(std::string const & name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}
std::string const & Victim::getName() const { return (_name); }

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator << (std::ostream &os, const Victim &p)
{
    return (os << "I am " << p.getName() << "and I like otters!" << std::endl);
}