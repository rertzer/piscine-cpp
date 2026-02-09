/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:50:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 14:39:54 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string nm);
		~HumanB(void);
		
		void	attack(void);
		void	setWeapon(Weapon& cb);
	
	private:
		std::string	name;
		Weapon*		club;
};
#endif
