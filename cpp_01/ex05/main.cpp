/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:01:08 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/26 12:35:27 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "Harl.hpp"

int	main(void)
{
	Harl	myHarl;

	std::cout << "let see how it works: debug level\n";
	myHarl.complain("DEBUG");
	std::cout << "\nlet see how it works: info level\n";
	myHarl.complain("INFO");
	std::cout << "\nlet see how it works: warning level\n";
	myHarl.complain("WARNING");
	std::cout << "\nlet see how it works: error level\n";
	myHarl.complain("ERROR");
	std::cout << "\nlet see how it works: scrap level\n";
	myHarl.complain("SCRAP");

	return 0;
}
