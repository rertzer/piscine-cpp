/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:55:51 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 11:37:39 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character():name("Anonymous")
{
	std::cout << "Character default constructor called\n";
	for (int i = 0; i < 4; i++)
		backpack[i] = 0;
}

Character::Character(std::string const & nm):name(nm)
{
	std::cout << "Character constructor called\n";
	for (int i = 0; i < 4; i++)
		backpack[i] = 0;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor called\n";
	name = src.name;
	for (int i = 0; i < 4; i++)
	{
		if (src.backpack[i])
			backpack[i] = src.backpack[i]->clone();
		else
			backpack[i] = 0;
	}
}

Character::~Character()
{
	std::cout << "Character destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (backpack[i])
			delete backpack[i];
	}

}

Character &	Character::operator=(Character const & rhs)
{
	std::cout << "Character asignment operator called\n";
	name = rhs.name;
	for (int i = 0; i < 4; i++)
	{
		if (backpack[i])
			delete backpack[i];
		if (rhs.backpack[i])
			backpack[i] = rhs.backpack[i]->clone();
		else
			backpack[i] = 0;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void	Character::equip(AMateria * m)
{
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (backpack[i] == 0)
			break ;
	}
	if (i == 4)
	{
		std::cout << "Sorry " << getName() << "'s inventory is full. Drop it.\n";
		delete m;
	}
	else
		backpack[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		backpack[idx] = 0;
	else
		std::cout << "Sorry, wrong index.\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && backpack[idx])
		backpack[idx]->use(target);
	else
		std::cout << "Sorry, wrong index\n";
}
