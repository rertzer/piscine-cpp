/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:51:06 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 12:41:20 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void):_number(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called\n";
	this->_number = integer << this->_fract;
}

Fixed::Fixed(float const flt)
{
	std::cout << "Float constructor called\n";
	this->_number  = (int)roundf(flt * (1 << this->_fract));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
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
	return this->_number;
}

void	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_number / (1 << this->_fract);
}

int	Fixed::toInt(void) const
{
	return this->_number >> this->_fract;
}

std::ostream & operator<<(std::ostream & ost, Fixed const &rhs)
{
	ost << rhs.toFloat();
	return ost;
}

const int	Fixed::_fract = 8;
