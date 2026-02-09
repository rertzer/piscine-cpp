/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:42:43 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 14:35:05 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool		sameSide(Point const a, Point const b, Point const c, Point const p);
static Fixed	getDistance(Point const a, Point const b, Point const p);
static Fixed	getSlope(Point const a, Point const b);
static Fixed	getIntercept(Point const a, Fixed const slope);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	ok = false;

	ok = sameSide(a, b, c, point);
	ok &= sameSide(b, c, a, point);
	ok &= sameSide(c, a, b, point);
	
	return ok;
}

static bool	sameSide(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	dist_c = getDistance(a, b, c);
	Fixed	dist_p = getDistance(a, b, p);

	return ((dist_c * dist_p) > 0);
}

static Fixed	getDistance(Point const a, Point const b, Point const p)
{
	if (a.getX() == b.getX())
		return p.getX() - a.getX();

	Fixed	slope = getSlope(a, b);
	Fixed	intercept = getIntercept(a, slope);

	return p.getY() - slope * p.getX() - intercept;
}

static Fixed	getSlope(Point const a, Point const b)
{
	return (a.getY() - b.getY()) / (a.getX() - b.getX());
}

static Fixed	getIntercept(Point const a, Fixed const slope)
{
	return a.getY() - (a.getX() * slope);
}


