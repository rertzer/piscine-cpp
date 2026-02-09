/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:28:45 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/11 19:00:33 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	int	val1;
	int	val2;
};

class	Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data *		deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(Serializer const & sr);
		~Serializer();

		Serializer	operator=(Serializer const & rhs);
};

#endif
