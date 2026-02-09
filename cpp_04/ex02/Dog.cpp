/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 10:57:13 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
	cortex = new Brain();
}

Dog::Dog(const Dog & src): Animal()
{
	std::cout << "Dog copy constructor called\n";
	type = src.type;
	cortex = new Brain(*src.cortex);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
	delete cortex;
}

Dog	& Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
		if (cortex)
			delete cortex;
		cortex = new Brain(*rhs.cortex);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaff! Ouaff!\n";
}

Brain	*Dog::getBrain(void) const
{
	return cortex;
}
