/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:13:10 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 15:29:35 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called\n";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap default constructor called\n";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap & ct): ClapTrap(ct)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called\n";
}

FragTrap &	FragTrap::operator=(const FragTrap & rhs)
{
	std::cout << "FragTrap assignment operator called\n";
	if (this != &rhs)
	{
		_name = rhs._name;
		_hit_points = rhs._hit_points;
		_energy_points = rhs._energy_points;
		_attack_damage = rhs._attack_damage;
	}
	return *this;
	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys, I'm " << _name << " the FragTrap. Give me Five!\n";
}
