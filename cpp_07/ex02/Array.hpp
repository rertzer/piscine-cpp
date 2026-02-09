/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:21:22 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 13:25:06 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class	Array
{
	public:
		Array();
		Array(unsigned int sz);
		Array(Array<T> const & arr);
		~Array();

		Array<T> &	operator=(Array<T> const & rhs);
		T &			operator[](unsigned int i);

		unsigned int size() const;
	
	private:

		class	OutOfRangeException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception: Index is out of range");
				}
		};

		unsigned int const	n;
		T *					array;
};

template<typename T>
Array<T>::Array(): n(0)
{
	array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int sz): n(sz)
{
	array = new T[n];
	for (size_t i = 0; i < n; i++)
		array[i] = T();
}

template<typename T>
Array<T>::Array(Array<T> const & arr):n(arr.size())
{
	array = new T[arr.size()];
	for (size_t i =  0; i < n; i++)
		array[i] = arr.array[i];
}

template<typename T>
Array<T>::~Array()
{
	delete[] array;
}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const & rhs)
{
	if (array)
		delete[] array;
	array = new T[rhs.size()];
	n = rhs.size();
	for (unsigned int i =  0; i < n; i++)
		array[i] = rhs[i];
}

template<typename T>
T &	Array<T>::operator[](unsigned int i)
{
	if (i >= n)
		throw(OutOfRangeException());
	return array[i];
}

template<typename T>
unsigned int 	Array<T>::size() const
{
	return n;
}
#endif
