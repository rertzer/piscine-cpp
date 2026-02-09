/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 13:07:19 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(const std::string name);
		FragTrap(const FragTrap & ct);
		~FragTrap(void);

		FragTrap &	operator=(const FragTrap & rhs);

		void	highFivesGuys(void);
	private:
		FragTrap(void);
};

#endif
