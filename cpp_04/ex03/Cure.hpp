/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:25:38 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/08 18:43:43 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure const & src);
		virtual ~Cure();

		Cure &	operator=(const Cure &rhs);

		Cure*		clone() const;
		void		use(ICharacter& target);
};

#endif
