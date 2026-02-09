/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:12:15 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 11:47:12 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	tic("Tric");
	ClapTrap	tic2("Truc");

	tic2 = tic;
	ClapTrap	tic3(tic);

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

	std::cout << "\nTic3 playing\n";
	tic3.takeDamage(9);
	tic3.beRepaired(9);
	tic3.takeDamage(42);
	tic3.beRepaired(42);
	return (0);
}
