/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:47:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 10:41:31 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void):index(0)
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain & src)
{
	std::cout << "Brain copy constructor called\n";
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

Brain	& Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignment operator called\n";
	if (this != &rhs)
	{
		index = rhs.index;
		for (int i = 0; i < index; i++)
			ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

void	Brain::thinking(void) const
{
	for (int i = 0; i < index; i++)
		std::cout << ideas[i] << std::endl;
}

void	Brain::learning(std::string newidea)
{
	if (index < 100)
	{
		ideas[index] = newidea;
		index++;
	}
	else
		std::cout << "Sorry my brain is full!\n";
}
