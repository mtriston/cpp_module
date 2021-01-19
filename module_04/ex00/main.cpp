#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");

		Victim jim("Jimmy");
		Peon joe("Joe");

		std::cout << robert << jim << joe;
	
		robert.polymorph(jim);
		robert.polymorph(joe);
	}

	std::cout << "\n\n___Additional tests___\n\n" << std::endl;
	{
		Victim v;
		v = Victim(v);
		v.getName();
		v.getPolymorphed();

		Peon p;
		p = Peon(p);
		p.getName();
		p.getPolymorphed();
		
		Sorcerer s;
		s = Sorcerer(s);
		s.polymorph(v);
		s.polymorph(p);
	}
	return 0;
}
