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
		Squad *squad = new Squad(*temp);

		ISpaceMarine* marine = new TacticalMarine;

		squad->push(0);
		squad->push(marine);
		squad->push(marine);

		std::cout << "Count after push 0 and two same pointers: " << squad->getCount() << std::endl;

		for (int i = 0; i < squad->getCount(); ++i)
		{
			ISpaceMarine* cur = squad->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		*temp = *squad;

		for (int i = 0; i < temp->getCount(); ++i)
		{
			ISpaceMarine* cur = temp->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		temp = temp;

		delete temp;
		delete squad;
	}
	return 0;
}
