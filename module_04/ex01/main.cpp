#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	SuperMutant s;
	me->equip(0);
	std::cout << *me;
	me->attack(&s);
	me->equip(pf);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(&s);
	me->attack(&s);
	me->attack(&s);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(&s);
	me->attack(&s);
	std::cout << s.getType() << std::endl;
	me->attack(0);

	return 0;
}