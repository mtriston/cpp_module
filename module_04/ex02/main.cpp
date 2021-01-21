#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(0);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "-----Additional tests-----" << std::endl;
	{
		Squad *temp = new Squad;

		ISpaceMarine* marine = new TacticalMarine;

		temp->push(0);
		temp->push(marine);
		temp->push(marine);

		Squad *squad = new Squad(*temp);

		std::cout << "Count after push 0 and two same pointers: " << squad->getCount() << std::endl;

		for (int i = 0; i < squad->getCount(); ++i)
		{
			ISpaceMarine* cur = squad->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}

		for (int i = 0; i < temp->getCount(); ++i)
		{
			ISpaceMarine* cur = temp->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}

		delete temp;
		delete squad;
	}
	return 0;
}
