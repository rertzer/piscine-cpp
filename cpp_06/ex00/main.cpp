/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:57:28 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 10:59:49 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char ** argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter one number\n";
		return 1;
	}
	std::string	to_convert = static_cast<std::string>(argv[1]);
	ScalarConverter::convert(to_convert);
	return 0;
}
