/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:41:07 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 10:57:10 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& an);
		~Dog(void);

		Dog & operator=(const Dog & rhs);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;

	private:
		std::string	type;
		Brain		*cortex;
};

#endif
