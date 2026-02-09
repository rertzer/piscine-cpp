/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:13:10 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/11 11:55:22 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name)
    : ClapTrap(name + "_clap_name"), _name(name) {
  std::cout << "DiamondTrap constructor called\n";
  _energy_points = scavtrap_energy_points;
}

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name") {
  std::cout << "DiamondTrap default constructor called\n";
  _energy_points = scavtrap_energy_points;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ct)
    : ClapTrap(ct), _name(ct._name) {
  std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
  std::cout << "DiamondTrap assignment operator called\n";
  if (this != &rhs) {
    _name = rhs._name;
    ClapTrap::_name = rhs.ClapTrap::_name;
    _hit_points = rhs._hit_points;
    _energy_points = rhs._energy_points;
    _attack_damage = rhs._attack_damage;
  }
  return *this;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
  std::cout << "My name is " << _name << ", " << ClapTrap::_name << ".\n";
}
