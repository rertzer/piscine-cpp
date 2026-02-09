/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:18:57 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/01 12:57:36 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float const fx, float const fy);
		Point(Point const & pt);
		~Point(void);

		Point &	operator=(Point const & rhs);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		Fixed	_x;
		Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
