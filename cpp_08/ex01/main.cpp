/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:42:33 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/28 11:48:06 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int	main()
{
	std::cout << "create empty span max size 5\ntry shortestSpan\n";
	Span sp = Span(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "try longest span\n";
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "insert 7 numbers\n";
	try
	{
		for (int i = 0; i < 7; i++)
		{
			sp.addNumber(i);
		}
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest span is: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span is: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "try to insert 12000 elements usinge addRange\n";
	std::vector<int> vektor (12000, 42);
	for (unsigned int i = 0;  i < vektor.size(); i++)
		vektor[i] = i;

	try
	{
		sp.addRange(vektor);
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "create a span with maxsize 15.000; test copy constructor\n";
	Span bsp(15000);
	Span bigsp(bsp);
	try
	{
		bigsp.addRange(vektor);
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "shortest span is: " << bigsp.shortestSpan() << std::endl;
		std::cout << "longest span is: " << bigsp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
