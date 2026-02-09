/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:38:04 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 11:39:43 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(Serializer const & sr)
{
	static_cast<void>(sr);
}

Serializer::~Serializer()
{}

Serializer	Serializer::operator=(Serializer const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

uintptr_t	Serializer::serialize(Data * ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
