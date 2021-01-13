#include "Human.hpp"

Brain&      Human::getBrain()
{
    return (_brain);
}

std::string Human::identify()
{
    return (_brain.identify());
}
