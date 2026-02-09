/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:34:40 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/06 09:52:24 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain& an);
		virtual ~Brain(void);

		Brain 	& operator=(const Brain & rhs);
		
		void	thinking(void) const;
		void	learning(std::string);

	protected:
		int			index;
		std::string	ideas[100];
};

#endif
