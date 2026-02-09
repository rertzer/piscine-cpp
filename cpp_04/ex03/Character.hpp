/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:39:53 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/10 11:19:40 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string const & nm);
		Character(Character const & src);
		~Character();
		Character &	operator=(Character const & rhs);

		std::string const & getName() const;
		void				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);

	private:
		std::string	name;
		AMateria *	backpack[4];
};

# endif
