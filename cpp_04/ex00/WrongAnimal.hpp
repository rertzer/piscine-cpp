/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:43:35 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 11:50:57 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string tp);
		WrongAnimal(const WrongAnimal& an);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(const WrongAnimal & rhs);

		std::string		getType(void) const;
		void			makeSound(void) const;

	protected:
		std::string	type;
};

#endif
