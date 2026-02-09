/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:22:52 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/13 16:02:33 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("A21"), signe_grade(150), exec_grade(150), is_signed(false)
{
	std::cout << "Form default constructor called\n";
}

Form::Form(const std::string nm, const int sggd, const int exgd): \
		name(nm), is_signed(false)
{
	std::cout << "Form constructor called\n";

	if (sggd < 1 || exgd < 1)
		throw (GradeTooHighException());
	else if (sggd > 150 || exgd > 150)
		throw (GradeTooLowException());
	signe_grade = sggd;
	exec_grade = exgd;
}

Form::Form(const Form & fm): name(fm.name), signe_grade(fm.signe_grade), \
						exec_grade(fm.exec_grade), is_signed(fm.is_signed)
{
	std::cout << "Form copy constructor called\n";
}

Form::~Form()
{
	std::cout << "Form destructor called\n";
}

Form &	Form::operator=(const Form &rhs)
{
	std::cout << "Form assignment operator called\n";
	if (this != &rhs)
	{
		signe_grade = rhs.signe_grade;
		exec_grade = rhs.exec_grade;
		is_signed = rhs.is_signed;
	}
		
	return *this;
}

const std::string &	Form::getName() const
{
	return name;
}

int	Form::getSignegrade() const
{
	return signe_grade;
}

int	Form::getExecgrade() const
{
	return exec_grade;
}

bool	Form::getIssigned() const
{
	return is_signed;
}

void	Form::beSigned(const Bureaucrat &bc)
{
	if (bc.getGrade() > signe_grade)
		throw(GradeTooLowException());
	is_signed = true;
}

std::ostream &operator<<(std::ostream &ost, const Form &fm)
{
	ost << fm.getName() << " form:  signe grade " << fm.getSignegrade();
	ost << ", execute grade " << fm.getExecgrade();
	if (fm.getIssigned())
		ost << " is signed";
	else
		ost << " is not signed";
	return ost;
}
