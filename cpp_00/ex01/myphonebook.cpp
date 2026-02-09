/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myphonebook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:14:07 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/08 11:18:19 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command = "";
	PhoneBook	myawsome;

	std::cout << "Hey! Welcome to My Awesome PhoneBook\n";

	while (command != "EXIT")
	{
		if (std::cin.eof() || std::cin.bad())
			break ;
		std::cout << "\nPlease enter a command (ADD, SEARCH or EXIT)\n";
		std::getline(std::cin, command);
		if (command == "ADD")
			myawsome.addContact();
		else if (command == "SEARCH")
			myawsome.searchContact();
	}
	
	return 0;
}
