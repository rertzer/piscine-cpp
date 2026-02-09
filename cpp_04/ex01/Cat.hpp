/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:41:07 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 10:29:18 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat& an);
		~Cat(void);

		Cat & operator=(const Cat & rhs);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;

	private:
		std::string	type;
		Brain		*cortex;
};

#endif
