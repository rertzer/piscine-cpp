/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:51:06 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/26 14:18:44 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_number(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called\n";
	this->_number = src.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n" ;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called\n";
	this->_number = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_number;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_number = raw;
}

const int	Fixed::_fract = 8;
