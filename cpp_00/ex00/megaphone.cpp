/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:58:55 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/20 15:35:02 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	upperise(std::string *loud)
{
	for (unsigned int i = 0 ; i < loud->length() ; i++)
		(*loud)[i] = std::toupper((*loud)[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";

	for (int i = 1 ; i < argc ; i++)
	{
		std::string loud(argv[i]);
		upperise(&loud);
		std::cout << loud;
	}
	std::cout << std::endl;
	return 0;
}
