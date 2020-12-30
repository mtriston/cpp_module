#include "Brain.hpp"

Brain::Brain(int iq) : _iq(iq) {}

std::string Brain::identify()
{
    std::stringstream ss;
    std::string addr;

    ss << this;
    addr = "0x" + ss.str();
    return (addr);
}