/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:20:56 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/27 14:17:42 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <limits>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
	public:
		Span(int nb);
		Span(Span const & sp);
		~Span();

		Span &	operator=(Span const & rhs);

		void			addNumber(int nb);
		void			addRange(std::vector<int> v);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	private:

		Span();

		class	OutOfRangeException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span::exception: Size is out of range");
				}
		};

		class	NoSpanException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span::exception: Not enough values for a span");
				}
		};

		unsigned int const	n;
		std::vector<int>	vec;
};

# endif
