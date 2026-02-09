/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:49:36 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/11 19:00:50 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	magic_numbers = {42, 24};
	Data *	magic_ptr = &magic_numbers;

	std::cout << "pointer " << magic_ptr << " points to " << magic_ptr->val1 << " and " << magic_ptr->val2 << std::endl;

	uintptr_t	serial = Serializer::serialize(magic_ptr);
	std::cout << "serial is " << serial << std::endl;

	magic_ptr = Serializer::deserialize(serial);
	std::cout << "pointer " << magic_ptr << " points to " << magic_ptr->val1 << " and " << magic_ptr->val2 << std::endl;
}
