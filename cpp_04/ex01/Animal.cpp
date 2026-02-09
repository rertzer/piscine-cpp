/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 11:57:30 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const std::string tp)
{
	std::cout << "Animal constructor called\n";
	type = tp;
}

Animal::Animal(const Animal & src)
{
	std::cout << "Animal copy constructor called\n";
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

Animal	& Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return type;
}

void	Animal::makeSound(void) const
{
	std::cout << "The sound of silence\n";
}

Brain	*Animal::getBrain(void) const
{
	std::cout << "Well, it's a no-brainer...\n";
	return 0;
}
