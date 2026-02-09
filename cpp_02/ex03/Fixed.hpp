/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:40:24 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/01 11:26:27 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(int const integer);
		Fixed(float const flt);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);

		bool 	operator>(Fixed const & rhs) const;
		bool 	operator<(Fixed const & rhs) const;
		bool 	operator>=(Fixed const & rhs) const;
		bool 	operator<=(Fixed const & rhs) const;
		bool 	operator==(Fixed const & rhs) const;
		bool 	operator!=(Fixed const & rhs) const;
		
		Fixed 	operator+(Fixed const & rhs) const;
		Fixed 	operator-(Fixed const & rhs) const;
		Fixed 	operator*(Fixed const & rhs) const;
		Fixed 	operator/(Fixed const & rhs) const;

		Fixed &	operator++(void);
		Fixed	operator++(int);
		Fixed &	operator--(void);
		Fixed	operator--(int);
		
		static Fixed &	min(Fixed &a, Fixed &b);
		static Fixed const &	min(Fixed const &a, Fixed const &b);
		static Fixed &	max(Fixed &a, Fixed &b);
		static Fixed const &	max(Fixed const &a, Fixed const &b);
	
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_number;
		static int const	_fract;
};

std::ostream & operator<<(std::ostream & ost, Fixed const & rhs);

#endif
