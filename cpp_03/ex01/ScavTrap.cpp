/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:13:10 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 15:27:10 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called\n";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & ct): ClapTrap(ct)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called\n";
}

ScavTrap &	ScavTrap::operator=(const ScavTrap & rhs)
{
	std::cout << "ScavTrap assignment operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return *this;
	
}

void	ScavTrap::attack(const std::string & target)
{
	if (_energy_points == 0 || _hit_points == 0)
		std::cout << "Almighty ScavTrap " << _name << " can't attack: it's out of order.\n";
	else
	{
		_energy_points--;
		std::cout << "ScavTrap " << _name << " hit " << target << " inflicting it ";
		std::cout << _attack_damage << " damage points! Hourra!!\n";
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " Keeps the Gate\n";
}
