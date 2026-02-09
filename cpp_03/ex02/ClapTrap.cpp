/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:27:29 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 15:27:34 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name): \
		_name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(void): \
		_hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called\n";
}


ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap	& ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap assignment operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy_points == 0 || _hit_points == 0)
		std::cout << "Sorry, ClapTrap " << _name << " can't attack: it's out of order.\n";
	else
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack_damage << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	if (_hit_points < 0)
		_hit_points = 0;
	std::cout << "ClapTrap " << _name << " received " << amount;
	std::cout << " damage points. " << _hit_points << " hit points remain.\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points == 0 || _hit_points == 0)
		std::cout << "Sorry, ClapTrap " << _name << " is beyond repair.\n";
	else
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repairs itself";
		std::cout << ", getting " << amount << " points back!\n";
		std::cout << "Now it has " << _hit_points << " hit points and ";
		std::cout << _energy_points << " energy points.\n";
	}
}
