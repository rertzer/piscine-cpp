/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:37:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 09:02:21 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called\n";
}

Cure::Cure(Cure const & src): AMateria("cure")
{
	(void)src;
	std::cout << "Cure copy constructor called\n";
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

Cure &	Cure::operator=(Cure const & rhs)
{
	(void)rhs;
	std::cout << "Cure assignment operator called\n";
	return *this;
}

Cure *	Cure::clone() const
{
	Cure*	plaster = new Cure();
	return plaster;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
