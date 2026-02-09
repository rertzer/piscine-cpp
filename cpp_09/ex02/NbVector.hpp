/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NbVector.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:20:31 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/26 09:26:02 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NBVECTOR_HPP
# define NBVECTOR_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <exception>
# include "Number.hpp"

class	NbVector
{
	public:
		NbVector();
		NbVector(std::vector<Number> const & vec);
		NbVector(NbVector const & nbv);
		~NbVector();
		
		NbVector &	operator=(NbVector const & rhs);
		Number &	operator[](unsigned int i);
		
		std::vector<Number>  &	getVector();
		unsigned int			getLen();
		unsigned int			getBigPosByIndex(unsigned int index, unsigned int end);
		Number &				getByIndex(unsigned int index);
		void					loadData(int argc, char **argv);
		void					clear();
		void					push(Number nb);
		void					increase();
		
		class	ParsingException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Error: Bad entry");
				}
		};

		class	OutOfRangeException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Error: Out of range index");
				}
		};


	private:
		std::vector<Number> 	nbs;
		unsigned int			len;
};

std::ostream & operator<<(std::ostream & ost, NbVector & rhs);
#endif
