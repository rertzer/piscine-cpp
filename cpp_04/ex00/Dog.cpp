/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 14:51:21 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog & src): Animal("Dog")
{
	std::cout << "Dog copy constructor called\n";
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
}

Dog	& Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaff! Ouaff!\n";
}
