/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:22:52 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/18 16:49:10 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Machin"), grade(150)
{
	std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string nm, const int gd):name(nm)
{
	std::cout << "Bureaucrat constructor called\n";
	if (gd < 1)
		throw (GradeTooHighException());
	else if (gd > 150)
		throw (GradeTooLowException());
	else
		grade = gd;
}

Bureaucrat::Bureaucrat(const Bureaucrat & bc): name(bc.name)
{
	std::cout << "Bureaucrat copy constructor called\n";
	if (bc.grade < 1)
		throw (GradeTooHighException());
	else if (bc.grade > 150)
		throw (GradeTooLowException());
	else
		grade = bc.grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat &	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat assignment operator called\n";
	if (this != &rhs)
		grade = rhs.grade;
	return *this;
}

const std::string &	Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::upgrade()
{
	if (grade > 1)
		grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::downgrade()
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}


void	Bureaucrat::signForm(Form & fm) const
{
	try
	{
		fm.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << name << " couldn't sign " << fm.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &ost, const Bureaucrat &bc)
{
	return ost << bc.getName() << ", bureaucrat grade " << bc.getGrade();
}
