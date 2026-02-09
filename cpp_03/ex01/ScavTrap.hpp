/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 13:03:39 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public :
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap & ct);
		~ScavTrap(void);

		ScavTrap &	operator=(const ScavTrap & rhs);

		void	attack(const std::string & target);
		void	guardGate(void);

	private:
		ScavTrap(void);
};

#endif
