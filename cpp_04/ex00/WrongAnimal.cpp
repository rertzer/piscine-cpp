/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 11:52:21 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string tp)
{
	std::cout << "WrongAnimal constructor called\n";
	type = tp;
}



WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal	& WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "The wrong sound of silence\n";
}
