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

	std::cout << "\n----------Additional tests----------" << std::endl;

	SuperMutant *s = new SuperMutant();

	me->equip(0);
	std::cout << *me;
	me->attack(s);

	me->equip(pf);

	std::cout << "Weapon has " << me->getWeapon().getDamage() << " damage" << std::endl;
	std::cout << "SuperMutant's hp " << s->getHP() << std::endl;
	me->attack(s);
	std::cout << "SuperMutant's hp " << s->getHP() << std::endl;
	me->attack(s);
	std::cout << "SuperMutant's hp " << s->getHP() << std::endl;
	me->attack(s);
	std::cout << "SuperMutant's hp " << s->getHP() << std::endl;
	me->attack(s);

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;

	me->attack(s);
	std::cout << "SuperMutant's hp " << s->getHP() << std::endl;
	me->attack(s);

	delete me;
	delete pr;
	delete pf;

	return 0;
}
