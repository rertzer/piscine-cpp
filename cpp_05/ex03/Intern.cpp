/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:46:24 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/15 09:22:10 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default consturctor called\n";
}

Intern::Intern(const Intern & it)
{
	(void)it;
	std::cout << "Intern copy constructor called\n";
}

Intern::~Intern()
{
	std::cout << "Intern destructor called\n";
}

Intern &	Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	return *this;
}

AForm *	Intern::makeForm(std::string const & name, std::string const & target) const
{
	std::string form_name [] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm *(Intern::*maker[]) (const std::string &) const = { \
		&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePardon};
	AForm * myform;
	for (int i = 0 ; i < 3 ; i++)
	{
		if (name == form_name[i])
		{
			myform = (this->*maker[i])(target);
			std::cout << "Intern creates " << name << std::endl;
			return myform;
		}
	}
	std::cout << "Sorry, " << name << " form don't exist.\n";
	return 0;
}

AForm * Intern::makeShrubbery(std::string const & target) const
{
	AForm *form = new ShrubberyCreationForm(target);
	return form;
}

AForm * Intern::makeRobotomy(std::string const & target) const
{
	AForm * form = new  RobotomyRequestForm(target);
	return form;
}


AForm * Intern::makePardon(std::string const & target) const
{
	AForm *	form = new PresidentialPardonForm(target);
	return form;
}
