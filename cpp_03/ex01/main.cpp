/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:12:15 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 09:44:56 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	tic("Tic");
	ScavTrap	tic2("Truc");

	tic2 = tic;
	ScavTrap	tic3(tic);

	std::cout << "\nTic playing\n";
	tic.attack("Tac");
	tic.takeDamage(7);
	tic.beRepaired(2);
	tic.takeDamage(5);
	tic.attack("Toc");
	tic.attack("Tuc");
	tic.takeDamage(33);
	tic.attack("Tac");
	tic.beRepaired(42);

	
	std::cout << "\nTic2 playing\n";
	tic2.attack("Tic");
	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");

	tic2.attack("Tac");
	tic2.attack("Toc");
	tic2.attack("Tic");
	tic2.attack("Tac");

	tic2.guardGate();
	tic2.takeDamage(99);
	tic2.beRepaired(66);
	tic2.takeDamage(99);
	tic2.attack("Tic");

	std::cout << "\nTic3 playing\n";
	tic3.takeDamage(90);
	tic3.beRepaired(90);
	tic3.takeDamage(42);
	tic3.beRepaired(42);
	return (0);
}
