/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:42:53 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 14:22:30 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& an);
		~Dog(void);

		Dog & operator=(const Dog & rhs);
		void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif
