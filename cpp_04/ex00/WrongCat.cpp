/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 11:53:16 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat & src): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called\n";
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat	& WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrao... cof cof cof\n";
}
