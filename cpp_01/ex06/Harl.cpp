/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:27:57 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/26 12:35:12 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//public functions
Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level) const
{
	std::string	str_level[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*fun_level[4])(void) const = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	unsigned int	i;
	for (i = 0 ; i < 4 ; i++)
	{
		if (level == str_level[i])
			break ;
	}
	if (i < 4)
		(this->*fun_level[i])();
}

// private functions
void	Harl::debug(void) const
{
	std::cout << "Hum, this programm seems to work..." << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "How doe's it come that it's working !??"<< std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "Where is the bug ?? I need a bug... Find me a BUG!!!" << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "A WORKING PROGRAMM IS UNACCEPTABLE!!!! CALL THE BOCAL!!!!" << std::endl;
}
