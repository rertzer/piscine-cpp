/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:07:01 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 09:59:28 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Beware a Zombie woke up!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " the zombie left us. May her soul rest in peace" << std::endl;
}

void	Zombie::setName(std::string nm)
{
	this->name = nm;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
