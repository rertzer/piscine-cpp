/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:56:19 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/08 09:42:50 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void		setFirstname(std::string str);
		void		setLastname(std::string str);
		void		setNickname(std::string str);
		void		setPhonenumber(std::string str);
		void		setDarkestsecret(std::string str);
		std::string	getFirstname(void) const;
		std::string	getLastname(void) const;
		std::string	getNickname(void) const;
		std::string	getPhonenumber(void) const;
		std::string	getDarkestsecret(void) const;
		void		printContact(void) const;
		int			isValidPhonenumber(std::string input) const;

	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phonenumber;
		std::string		_darkestsecret;
};

#endif
