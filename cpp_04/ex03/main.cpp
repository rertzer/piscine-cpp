/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:06:33 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/11 10:41:46 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{

	AMateria * tmp;
	AMateria *	garbage;

	std::cout << "Materia source\n";
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	src->learnMateria(new Ice());

	std::cout << std::endl;
	MateriaSource*	src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	std::cout << std::endl;
	MateriaSource*	src3 = src2;

	std::cout << "\nCharacter\n";
	ICharacter* me = new Character("me");
	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	garbage = src->createMateria("cure");
	me->equip(garbage);

	tmp = src3->createMateria("ice");
	me->equip(tmp);
	tmp = src3->createMateria("cure");

	
	std::cout << "\nusing staff.\n";	
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->use(2, *me);
	me->use(5, *bob);
	me->use(-42, *bob);

	std::cout << "\nFilling Bob's backpack\n";
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);

	std::cout << std::endl;
	for (int i = -2; i < 6; i++)
		bob->use(i, *me);

	std::cout << std::endl;

	std::cout << "\nDeleting...\n";
	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	std::cout << std::endl;
	delete src2;
	std::cout << std::endl;
	delete garbage;
	return 0;
}
