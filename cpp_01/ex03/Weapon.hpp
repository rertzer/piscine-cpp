/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:39:26 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 14:25:28 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include	<iostream>

class	Weapon
{
	public:
		Weapon(std::string tp);
		~Weapon(void);

		std::string	getType();
		void		setType(std::string tp);
	
	private:
		std::string	type;
};

#endif
