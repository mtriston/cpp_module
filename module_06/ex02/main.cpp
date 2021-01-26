//
// Created by mtriston on 26.01.2021.
//

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base* generate(void) {
	int index = std::rand() % 3;
	if (index == 0) {
		std::cout << "generate A" << std::endl;
		return (new A());
	}
	else if (index == 1) {
		std::cout << "generate B" << std::endl;
		return (new B());
	}
	else {
		std::cout << "generate C" << std::endl;
		return (new C());
	}
}

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown class" << std::endl;
}

void identify_from_reference(Base & p) {
	identify_from_pointer(&p);
}

int main() {
	srand(time(0));
	Base * ptr = generate();
	std::cout << "Try to identify with identify_from_pointer" << std::endl;
	identify_from_pointer(ptr);
	std::cout << "Try to identify with identify_from_reference" << std::endl;
	identify_from_reference(*ptr);
	return (0);
}