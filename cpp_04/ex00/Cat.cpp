/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 14:49:17 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat & src): Animal("Cat")
{
	std::cout << "Cat copy constructor called\n";
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
}

Cat	& Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat assignment operator called\n";
	if (this != &rhs)
	{
		type = rhs.type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuuuuuuuuuuu\n";
}
