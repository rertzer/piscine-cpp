/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:37:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 09:04:32 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called\n";
}

Ice::Ice(Ice const & src): AMateria("ice")
{
	(void)src;
	std::cout << "Ice copy constructor called\n";
}

Ice::~Ice()
{
	std::cout << "Ice destructor called\n";
}

Ice &	Ice::operator=(Ice const & rhs)
{
	(void)rhs;
	std::cout << "Ice assignment operator called\n";
	return *this;
}

Ice *	Ice::clone() const
{
	Ice*	icecube = new Ice();
	return icecube;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
