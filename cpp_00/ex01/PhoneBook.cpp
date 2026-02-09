/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:24:00 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/08 09:41:59 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_current_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{
	std::string		input = "";
	
	input = this->_getInput("first name");
	this->_book[this->_current_contact].setFirstname(input);

	input = this->_getInput("last name");
	this->_book[this->_current_contact].setLastname(input);

	input = this->_getInput("nick name");
	this->_book[this->_current_contact].setNickname(input);

	input = this->_getInput("phone number");
	this->_book[this->_current_contact].setPhonenumber(input);

	input = this->_getInput("darkest secret");
	this->_book[this->_current_contact].setDarkestsecret(input);

	this->_current_contact = (this->_current_contact + 1) % 8;
}

std::string	PhoneBook::_getInput(std::string name) const
{
	std::string	input = "";

	while (input == "")
	{
		std::cout << "Enter " << name << " : ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (input == "")
			std::cout << "Sorry, cant't be empty" << std::endl;
		if (name == "phone number" && \
				!this->_book[this->_current_contact].isValidPhonenumber(input))
		{
			input = "";
			std::cout << "Sorry, only digits allowed" << std::endl;
		}
	}
	return input;
}

void	PhoneBook::searchContact(void) const
{
	unsigned int	index;

	this->_printTable();
	index = this->_getIndex();
	this->_book[index].printContact();
}

void	PhoneBook::_printTable() const
{
	for (int i = 0 ; i < 8 ; i++)
	{
			this->_printLine(i);
	}
}

void	PhoneBook::_printLine(unsigned int index) const
{
	std::cout << std::setfill (' ') << std::setw(10) << index;
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10) << this->_truncate(this->_book[index].getFirstname());
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10) << this->_truncate(this->_book[index].getLastname());
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10) << this->_truncate(this->_book[index].getNickname());
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10) << this->_truncate(this->_book[index].getPhonenumber());
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw(10) << this->_truncate(this->_book[index].getDarkestsecret());
	std::cout << std::endl;
}

std::string PhoneBook::_truncate(std::string src) const
{
	std::string	dest;
	if (src.length() > 10)
	{
		dest = src.substr(0, 10);
		dest[9] = '.';
	}
	else
		dest =  src;
	return dest;
}

unsigned int	PhoneBook::_getIndex(void) const
{
	std::string		input;
	unsigned int	index = 9;

	while (index > 7)
	{
		std::cout << "Enter an index : ";
		std::getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
			index = input[0] - '0';
		else
			index = 9;
		if (index > 7)
			std::cout << "\nSorry, please enter a number between 0 and 7";
		std::cout << std::endl;
	}
	return index;
}
