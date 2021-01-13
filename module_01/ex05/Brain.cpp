#include "Brain.hpp"

std::string Brain::identify()
{
    std::stringstream ss;
    std::string addr;

    ss << this;
    addr = "0x" + ss.str();
    return (addr);
}
