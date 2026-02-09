/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:34:13 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/08 09:42:28 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

class	PhoneBook
{
	public:
						PhoneBook(void);
						~PhoneBook(void);

		void			addContact(void);
		void			searchContact(void) const;

	private:
		int				_current_contact;
		Contact			_book[8];

		std::string		_getInput(std::string name) const;
		std::string		_truncate(std::string src) const;
		unsigned int	_getIndex(void) const;
		void			_printTable(void) const;
		void			_printLine(unsigned int index) const;
};

#endif
