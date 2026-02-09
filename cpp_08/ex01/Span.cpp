/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:35:36 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/27 14:44:04 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//public
Span::Span(int nb): n(nb)
{	
}

Span::Span(Span const & s): n(s.n), vec(s.vec)
{
}

Span::~Span()
{
}

Span &	Span::operator=(Span const & rhs)
{
	if (n <= rhs.n)
		throw (OutOfRangeException());
	if (this != &rhs)
	{
		vec = rhs.vec;
	}
	return *this;
}

void	Span::addNumber(int nb)
{
	if (vec.size() < n)
		vec.push_back(nb);
	else
		throw(OutOfRangeException());
}

void	Span::addRange(std::vector<int> v)
{
	if (vec.size() + v.size() > n)
		throw(OutOfRangeException());
	vec.insert(vec.end(), v.begin(), v.end());
}

unsigned int	Span::shortestSpan()
{
	if (vec.size() < 2)
		throw(NoSpanException());

	unsigned int	mini = static_cast<unsigned int>(std::numeric_limits<int>::max());
	
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	
	for (unsigned int i = 0; i < tmp.size() - 1; i++)
		mini = std::min(mini, static_cast<unsigned int>(tmp[i + 1] - tmp[i]));
	return (mini);
}

unsigned int	Span::longestSpan()
{
	if (vec.size() < 2)
		throw(NoSpanException());

	int	mini = *std::min_element(vec.begin(), vec.end());
	int	maxi = *std::max_element(vec.begin(), vec.end());
	return (static_cast<unsigned int>(maxi - mini));
}

//private
Span::Span(): n(0)
{}
