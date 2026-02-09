/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:29:24 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 09:57:48 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	const int	N = 9;

	std::cout << "creation of a zombie hord and listenning of their sweet song" << std::endl;

	Zombie* horde = zombieHorde(N, "Dolly");

	for (int i = 0 ; i < N ; i++)
	{
		std::cout << "\nDear zombie " << i <<", we are listening" << std::endl;
		horde[i].announce();
	}
	std::cout << "\nThis is the end, say goodbye to our friends" << std::endl;
	delete [] horde;
	return (0);
}
