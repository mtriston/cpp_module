#include "Pony.hpp"

static void	ponyOnTheHeap() {

	Pony *pony = new Pony("Pony_on_the_heap");
	pony->say();
	delete pony;
}

static void	ponyOnTheStack() {

	Pony pony("Pony_on_the_stack");
	pony.say();
}

int			main() {

	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}