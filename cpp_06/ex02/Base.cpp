/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:57:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 11:54:04 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *	generate(void)
{
	Base *	p;
	int		i = std::rand();
	if (i % 3 == 0)
	{
		p = new A();
		std::cout << "generated an A object\n";
	}
	else if (i % 3 == 1)
	{
		p = new B();
		std::cout << "generated an B object\n";
	}
	else
	{
		p = new C();
		std::cout << "generated an C object\n";
	}
	return p;
}

void	identify(Base * p)
{
	A* pa = dynamic_cast<A*>(p);
	B* pb = dynamic_cast<B*>(p);
	C* pc = dynamic_cast<C*>(p);
	if (pa != 0)
		std::cout << p << " is a A pointer\n";
	else if (pb != 0)
		std::cout << p << " is a B pointer\n";
	else if (pc != 0)
		std::cout << p << " is a C pointer\n";
	else
		std::cout << "Oups! something went wrong\n";
}

void	identify(Base & p)
{
	bool	ok = false;
	try
	{
		A & ra = dynamic_cast<A&>(p);
		ok = true;
		std::cout << &ra << " is a A reference\n";
	}
	catch (std::exception & bc)
	{
	}
	try
	{
		B & rb = dynamic_cast<B&>(p);
		ok = true;
		std::cout << &rb << " is a B reference\n";
	}
	catch (std::exception & bc)
	{
	}
	try
	{
		C & rc = dynamic_cast<C&>(p);
		ok = true;
		std::cout << &rc << " is a C reference\n";
	}
	catch (std::exception & bc)
	{
	}
	if (!ok)
		std::cout << "Oups! something went wrong!\n";
}
