/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:45:12 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 14:27:46 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string tp): type(tp)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	Weapon::getType()
{
	return this->type;
}

void	Weapon::setType(std::string tp)
{
	this->type = tp;
}
