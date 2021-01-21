//
// Created by mtriston on 20.01.2021.
//
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "----------More tests-----------" << std::endl;
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	std::cout << "Cure XP: " << tmp->getXP() << std::endl;

	std::cout << "Stress test Character" << std::endl;
	me->equip(0);
	me->equip(src->createMateria("fire"));
	me->unequip(-1);
	me->unequip(100);
	me->use(-1, *bob);
	me->use(4, *bob);
	me->use(10, *bob);
	*bob = *me;
	bob->use(1, *me);
	std::cout << "Stress test MateriaSource" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(0);
	AMateria *m = new Cure();
	src->learnMateria(m);
	MateriaSource* src_new = new MateriaSource();
	src_new->learnMateria(new Ice());
	MateriaSource* assign_new = new MateriaSource(*src_new);
	AMateria *m1 = assign_new->createMateria("ice");
	m1->use(*me);
	delete src_new;
	delete assign_new;
	delete m;
	delete m1;
	delete me;
	delete bob;
	delete src;
	return 0;
}