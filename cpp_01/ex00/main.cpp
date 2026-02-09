/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:29:24 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 09:51:26 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "A zombie is born, listen to his sweet song" << std::endl;
	Zombie	first_zombie("Bob");
	first_zombie.announce();

	std::cout << "\nAnother zombie is created, listen..." << std::endl;
	Zombie	second_zombie("Alice");
	second_zombie.announce();

	std::cout << "\nFirst zombie speaking again" << std::endl;
	first_zombie.announce();

		std::cout << "\nNow a newZombie" << std::endl;
	Zombie*	heap_zombie = newZombie("Charly");
	std::cout << "NewZombie speaking:" << std::endl;
	heap_zombie->announce();
	std::cout << "\nUnfortunatly newZombie must leave us" << std::endl;
	delete (heap_zombie);

	std::cout << "\nRandomChump call:" << std::endl;
	randomChump("Dorothee");

	std::cout << "\nThis is the end, say goodbye to our friends" << std::endl;
	return (0);
}
