/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:20:37 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 11:06:24 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called\n";
	for (int i = 0; i < 4; i++)
		backpack[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource copy constructor called\n";
	for (int i = 0; i < 4; i++)
		backpack[i] = src.backpack[i]->clone();
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called\n";
	for (int i = 0; i < 4; i++)
		delete backpack[i];
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource assignment operator called\n";
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs.backpack[i])
				backpack[i] = rhs.backpack[i]->clone();
			else
				backpack[i] = 0;
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i;
	
	for (i = 0; i < 4; i++)
	{
		if (backpack[i] == 0)
			break ;
	}
	if (i < 4)
	{	
		std::cout << "Learning " << m->getType() << "\n";
		backpack[i] = m;
	}
	else
	{
		std::cout << "Sorry, can't learn anymore. Drop it.\n";
		delete m;
	}
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (backpack[i] && backpack[i]->getType().compare(type) == 0)
			return backpack[i]->clone();			
	}
	std::cout << "Sorry, I don't know how to do that.\n";
	return 0;
}
