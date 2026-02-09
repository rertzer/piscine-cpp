/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:36:26 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 11:55:51 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
		return NULL;

	Zombie*	horde = new Zombie[N];

	for (int i = 0 ; i < N ; i++)
	{
		horde[i].setName(name);
	}
	return horde;
}


