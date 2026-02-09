/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:29:21 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 13:16:30 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T * array, unsigned int const size, void (*fun)(T &))
{
	for (unsigned int i = 0; i < size; i++)
		fun(array[i]);
}

template<typename T>
void	addone(T & a)
{
	a++;
}

template<typename T>
void	print(T & a)
{
	std::cout << a << " ";
}

#endif
