/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:29:46 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/13 15:58:45 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		int	grade = 3;

		Bureaucrat	machin = Bureaucrat();
		Bureaucrat	machin2 = Bureaucrat(machin);
		Bureaucrat	machin3 = Bureaucrat();
		machin3 = machin2;

		std::cout << machin3 << std::endl << std::endl;

		Bureaucrat	bigbos = Bureaucrat("Gerald", grade);
		std::cout << bigbos << std::endl << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{	
		Bureaucrat	machin = Bureaucrat();
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Good job " << machin.getName() << ". I promote you\n";
			machin.upgrade();
			std::cout << machin << "\n\n";
		}
		for (int i = 0; i < 6; i++)
		{
			std::cout << "YOU'R AN IDIOT " << machin.getName() << "! I STRIP YOU!!!\n";
			machin.downgrade();
			std::cout << machin << "\n\n";
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
