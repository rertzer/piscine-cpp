/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:03:36 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 11:18:35 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
				Zombie();
				~Zombie(void);

		void	setName(std::string name);
		void	announce(void) const;
	
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
