#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {}

Pony::~Pony() { std::cout << _name << " is dead :(" << std::endl; }

void	Pony::say() { std::cout << "Hello! My name is " << _name << "!" << std::endl; }
