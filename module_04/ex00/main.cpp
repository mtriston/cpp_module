#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Goof.hpp"

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
		Goof const g;
		//g = Goof(g);
		std::cout << g;
		g.getName();
		g.getPolymorphed();

		Peon const p;
		//p = Peon(p);
		std::cout << p;
		p.getName();
		p.getPolymorphed();
		
		Sorcerer const s;
		//s = Sorcerer(s);
		std::cout << s;
		s.polymorph(g);
		s.polymorph(p);
	}
	return 0;
}
