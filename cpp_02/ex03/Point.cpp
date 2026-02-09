/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:24:02 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/01 12:58:50 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Public functions

Point::Point(void): _x(Fixed()), _y(Fixed())
{
	return ;
}

Point::Point(float const fx, float const fy):_x(Fixed(fx)), _y(Fixed(fy))
{
	return ;
}

Point::Point(Point const & pt):_x(pt._x), _y(pt._y)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point &	Point::operator=(Point const & rhs)
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	return *this;
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

// Private functions
