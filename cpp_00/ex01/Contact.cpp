/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:11:25 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/08 09:43:31 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstname(std::string str)
{
	this->_firstname = str;	
}

void	Contact::setLastname(std::string str)
{
	this->_lastname = str;	
}

void	Contact::setNickname(std::string str)
{
	this->_nickname = str;	
}

void	Contact::setPhonenumber(std::string str)
{
	if (this->isValidPhonenumber(str))
		this->_phonenumber = str;	
}

void	Contact::setDarkestsecret(std::string str)
{
	this->_darkestsecret = str;	
}

std::string	Contact::getFirstname(void) const
{
	return this->_firstname;
}

std::string	Contact::getLastname(void) const
{
	return this->_lastname;
}

std::string	Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string	Contact::getPhonenumber(void) const
{
	return this->_phonenumber;
}
std::string	Contact::getDarkestsecret(void) const
{
	return this->_darkestsecret;
}
void	Contact::printContact(void) const
{
	std::cout << "firstname : " << this->_firstname << std::endl;
	std::cout << "lastname : " << this->_lastname << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "phonenumber : " << this->_phonenumber << std::endl;
	std::cout << "darkestsecret : " << this->_darkestsecret << std::endl;
}

int	Contact::isValidPhonenumber(std::string input) const
{
	for (unsigned int i = 0 ; i < input.length() ; i++)
	{
		if (!std::isdigit(input[i]))
			return 0;
	}
	return 1;
}
