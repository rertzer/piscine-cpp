/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:22:52 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 11:19:29 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("Formulaire A21"), signe_grade(150), exec_grade(150), is_signed(false)
{
	std::cout << "AForm default constructor called\n";
}

AForm::AForm(const std::string nm, const int sggd, const int exgd): \
		name(nm), is_signed(false)
{
	std::cout << "AForm constructor called\n";

	if (sggd < 1 || exgd < 1)
		throw (GradeTooHighException());
	else if (sggd > 150 || exgd > 150)
		throw (GradeTooLowException());
	signe_grade = sggd;
	exec_grade = exgd;
}

AForm::AForm(const AForm & fm): name(fm.name), signe_grade(fm.signe_grade), \
						exec_grade(fm.exec_grade), is_signed(fm.is_signed)
{
	std::cout << "AForm copy constructor called\n";
}

AForm::~AForm()
{
	std::cout << "AForm destructor called\n";
}

AForm &	AForm::operator=(const AForm &rhs)
{
	std::cout << "AForm assignment operator called\n";
	if (this != &rhs)
	{
		signe_grade = rhs.signe_grade;
		exec_grade = rhs.exec_grade;
		is_signed = rhs.is_signed;
	}
		
	return *this;
}

const std::string &	AForm::getName() const
{
	return name;
}

int	AForm::getSignegrade() const
{
	return signe_grade;
}

int	AForm::getExecgrade() const
{
	return exec_grade;
}

bool	AForm::getIssigned() const
{
	return is_signed;
}

void	AForm::beSigned(const Bureaucrat &bc)
{
	if (bc.getGrade() > signe_grade)
		throw (GradeTooLowException());
	is_signed = true;
}

void	AForm::executeCheck(Bureaucrat const & executor) const
{
	if (executor.getGrade() > exec_grade)
		throw (GradeTooLowException());
	if (is_signed == false)
		throw (NotSignedException());
}

std::ostream &operator<<(std::ostream &ost, const AForm &fm)
{
	ost << fm.getName() << " form:  signe grade " << fm.getSignegrade();
	ost << ", execute grade " << fm.getExecgrade();
	if (fm.getIssigned())
		ost << " is signed";
	else
		ost << " is not signed";
	return ost;
}
