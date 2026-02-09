/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:25:38 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/08 17:54:59 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		virtual ~Ice();

		Ice &	operator=(const Ice &rhs);

		std::string const & getType() const;
		Ice*		clone() const;
		void		use(ICharacter& target);
};

#endif
