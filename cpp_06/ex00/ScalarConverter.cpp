/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:58:02 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 11:26:05 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const & sc)
{
	static_cast<void>(sc);
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

void	ScalarConverter::convert(std::string const & literal)
{
	int	type = 4;
	struct number nb = {0, 0, 0, 0, false, false, false, false};
	void (* funCast[])(std::string const &, struct number &) = {
		&charCast,
		&intCast,
		&doubleCast,
		&floatCast,
		&dspecCast,
		&fspecCast
	};
	
	type = getType(literal);
	if (type == 7)
	{
		std::cout << "Bad luck: parsing error\n";
		return;
	}
	funCast[type](literal, nb);
	printNb(nb);
}

int ScalarConverter::getType(std::string const & literal)
{
	std::string const dspecial[] = {"-inf", "+inf", "nan"};
	std::string const fspecial[] = {"-inff", "+inff", "nanf"};


	if (literal.size() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
		return 0;

	for (int i = 0; i < 3; i++)
	{
		if (literal.compare(dspecial[i]) == 0)
				return 4;
		if (literal.compare(fspecial[i]) == 0)
			return 5;
	}
	return (nbParsing(literal));
}

int	ScalarConverter::nbParsing(std::string const &  literal)
{
	int	state = 0;

	for (unsigned int i = 0 ; i < literal.size(); i++)
	{
		switch (state)
		{
			case 0:
				if (isdigit(literal[i]))
					state = 1;
				else if ((literal[i] != '+' || literal[i] != '-'))
					state = 6;
				else
					state = 7;
				break;
			case 1:
				if (literal[i] == '.')
					state = 8;
				else if (!isdigit(literal[i]))
					state = 7;
				break;
			case 2:
				if (literal[i] == 'f')
					state = 3;
				else if (!isdigit(literal[i]))
					state = 7;
				break;
			case 3:
				state = 7;
				break;
			case 6:
				if (isdigit(literal[i]))
					state = 1;
				else
					state = 7;
				break;
			case 7:
				break;
			case 8:
				if (isdigit(literal[i]))
					state = 2;
				else
					state = 7;
				break;
			default:
				state = 7;
				break;
		}
		if (state == 7)
			break;
	}
	if (state == 6 || state == 8)
		state = 7;
	return state;
}

void	ScalarConverter::charCast(std::string const & literal, struct number & nb)
{
	nb.c = literal[0];
	nb.c_ok = 1;
	
	nb.i = static_cast<int>(nb.c);
	nb.i_ok = 1;
	
	nb.d = static_cast<double>(nb.c);
	nb.d_ok = 1;

	nb.f = static_cast<float>(nb.c);
	nb.f_ok = 1;
}

void	ScalarConverter::intCast(std::string const & literal, struct number & nb)
{
	std::stringstream	ss;

	ss << literal;
	ss >> nb.i;
	if (ss.fail())
		return ;
	nb.i_ok = 1;

	if (nb.i <= static_cast<int>(std::numeric_limits<char>::max()) && nb.i >= static_cast<int>(std::numeric_limits<char>::min()))
	{
		nb.c = static_cast<char>(nb.i);
		nb.c_ok = 1;
	}
	
	nb.d = static_cast<double>(nb.i);
	nb.d_ok = 1;

	nb.f = static_cast<float>(nb.i);
	nb.f_ok = 1;
}

void	ScalarConverter::doubleCast(std::string const & literal, struct number & nb)
{
	std::stringstream	ss;
	
	ss << literal;
	ss >> nb.d;
	if (ss.fail())
		return ;
	nb.d_ok = 1;

	if (nb.d <= static_cast<double>(std::numeric_limits<char>::max()) && nb.d >= static_cast<double>(std::numeric_limits<char>::min()))
	{
		nb.c = static_cast<char>(nb.d);
		nb.c_ok = 1;
	}
	if (nb.d <= static_cast<double>(std::numeric_limits<int>::max()) && nb.d >= static_cast<double>(std::numeric_limits<int>::min()))
	{
		nb.i = static_cast<int>(nb.d);
		nb.i_ok = 1;
	}
	if (std::abs(nb.d) <= static_cast<double>(std::numeric_limits<float>::max()))
	{
		nb.f = static_cast<float>(nb.d);
		nb.f_ok = 1;
	}
}

void	ScalarConverter::floatCast(std::string const & literal, struct number & nb)
{
	std::stringstream	ss;
	
	ss << literal;
	ss >> nb.f;
	if (ss.fail())
		return ;
	nb.f_ok = 1;

	if (nb.f <= static_cast<float>(std::numeric_limits<char>::max()) && nb.f >= static_cast<float>(std::numeric_limits<char>::min()))
	{
		nb.c = static_cast<char>(nb.f);
		nb.c_ok = 1;
	}
	if (nb.f <= static_cast<float>(std::numeric_limits<int>::max()) && nb.f >= static_cast<float>(std::numeric_limits<int>::min()))
	{
		nb.i = static_cast<int>(nb.f);
		nb.i_ok = 1;
	}
	nb.d = static_cast<double>(nb.f);
	nb.d_ok = 1;
}

void	ScalarConverter::dspecCast(std::string const & literal, struct number & nb)
{
	nb.d = std::strtod(literal.c_str(), NULL);
	nb.d_ok = 1;

	nb.f = static_cast<float>(nb.d);
	nb.f_ok = 1;
}

void	ScalarConverter::fspecCast(std::string const & literal, struct number & nb)
{
	nb.f = std::strtof(literal.c_str(), NULL);
	nb.f_ok = 1;

	nb.d = static_cast<double>(nb.f);
	nb.d_ok = 1;
}

void	ScalarConverter::printNb(struct number const & nb)
{
	if (nb.c_ok)
	{
		if (isprint(nb.c))
			std::cout << "char: " << nb.c << std::endl;
		else
			std::cout << "char: Non displayable\n";
	}
	else
		std::cout << "char: impossible\n";
	
	if (nb.i_ok)
		std::cout << "int: " << nb.i << std::endl;
	else
		std::cout << "int: impossible\n";

	if (nb.f_ok)
		std::cout << "float: " << std::fixed << std::setprecision(1) << nb.f << "f" << std::endl;
	else
		std::cout << "float: impossible\n";

	if (nb.d_ok)
		std::cout << "double: " << std::fixed << std::setprecision(1) << nb.d << std::endl;
	else
		std::cout << "double: impossible\n";
}
