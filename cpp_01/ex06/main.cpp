/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:01:08 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/26 13:01:08 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	myHarl;

	if (argc != 2)
		return 1;

	std::string	str_level[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	unsigned int	i;
	for (i = 0 ; i < 4 ; i++)
	{
		if (argv[1] == str_level[i])
			break ;
	}

	switch (i)
	{
		case 0:
			std::cout << "[DEBUG]\n";
			myHarl.complain("DEBUG");
			std::cout << "\n[INFO]\n";
			myHarl.complain("INFO");
			std::cout << "\n[WARNING]\n";
			myHarl.complain("WARNING");
			std::cout << "\n[ERROR]\n";
			myHarl.complain("ERROR");
			break ;
		case 1:
			std::cout << "[INFO]\n";
			myHarl.complain("INFO");
			std::cout << "\n[WARNING]\n";
			myHarl.complain("WARNING");
			std::cout << "\n[ERROR]\n";
			myHarl.complain("ERROR");
			break ;

		case 2:
			std::cout << "[WARNING]\n";
			myHarl.complain("WARNING");
			std::cout << "\n[ERROR]\n";
			myHarl.complain("ERROR");
			break ;

		case 3:
			std::cout << "[ERROR]\n";
			myHarl.complain("ERROR");
			break ;

		default:
			std::cout << "[Well that's not a bug, try something else.]" << std::endl;
			break ;
	}

	return 0;
}
