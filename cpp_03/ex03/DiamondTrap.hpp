/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 11:20:16 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
public:
  DiamondTrap(const std::string name);
  DiamondTrap(void);
  DiamondTrap(const DiamondTrap &ct);
  ~DiamondTrap(void);

  DiamondTrap &operator=(const DiamondTrap &rhs);

  void attack(const std::string &target);
  void whoAmI(void);

private:
  std::string _name;
};

#endif
