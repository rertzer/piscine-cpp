/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:58:16 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/11 20:58:19 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <limits>
# include <cstdlib>
# include <cmath>
# include <sstream>

struct	number
{
	char	c;
	int		i;
	float	f;
	double	d;
	
	bool	c_ok;
	bool	i_ok;
	bool	d_ok;
	bool	f_ok;
};

class	ScalarConverter
{
	public:
		static void	convert(std::string const & literal);

	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & sc);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & rhs);
		
		static void	convertNumber(std::string const & literal, struct number & nb);
		static int	getType(std::string const & literal);
		static int	nbParsing(std::string const & literal);
		static void	charCast(std::string const & literal, struct number & nb);
		static void	intCast(std::string const & literal, struct number & nb);
		static void	doubleCast(std::string const & literal, struct number & nb);
		static void floatCast(std::string const & literal, struct number & nb);
		static void dspecCast(std::string const & literal, struct number & nb);
		static void fspecCast(std::string const & literal, struct number & nb);
		static void printNb(struct number const & nb);
};
#endif
