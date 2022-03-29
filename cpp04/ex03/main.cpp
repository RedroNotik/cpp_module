//
// Created by Gaynell Hanh on 3/27/22.
//

#include "AMateria.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"

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
	tmp = src->createMateria("ice");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(0, *bob);
//	me->use(1, *bob);
	me->use(2, *bob);
	ICharacter *john = new Character("Ppp");
	ICharacter* lol = john;
	lol->equip(tmp);
	lol->use(0, *john);
	delete john;
	lol->use(0, *john);
	delete bob;
	delete me;
	delete src;
	return 0;
}