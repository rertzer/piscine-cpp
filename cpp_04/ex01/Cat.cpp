/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 14:52:25 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	cortex = new Brain();
}

Cat::Cat(const Cat & src): Animal()
{
	std::cout << "Cat copy constructor called\n";
	type = src.type;
	cortex = new Brain(*src.cortex);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
	delete cortex;
}

Cat	& Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
		if (cortex)
			delete cortex;
		cortex = new Brain(*rhs.cortex);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuuuuuuuuuuu\n";
}

Brain	*Cat::getBrain(void) const
{
	return cortex;
}
