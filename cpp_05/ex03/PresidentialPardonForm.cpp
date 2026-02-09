/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:34:18 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 12:00:38 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): \
		AForm("Presidential Pardon Form", 25, 5), target("Nobody")
{
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string tg): \
		AForm("Presidential Pardon Form", 25, 5), target(tg)
{
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & fm): \
		AForm(fm), target(fm.target)
{
	std::cout << "PresidentialPardonForm copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called\n";
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	std::cout << "PresidentialPardonForm assignment operator called\n";
	(void)rhs;
	return *this;
}

const std::string &	PresidentialPardonForm::getTarget() const
{
	return target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bc) const
{
	executeCheck(bc);
	std::cout << target << " has been forgiven by our great President Zaphod Beeblebrox\n";
}

std::ostream &operator<<(std::ostream &ost, const PresidentialPardonForm &fm)
{
	ost << fm.getName() << " form:  signe grade " << fm.getSignegrade();
	ost << ", execute grade " << fm.getExecgrade() << ", target: " << fm.getTarget();
	if (fm.getIssigned())
		ost << " is signed";
	else
		ost << " is not signed";
	return ost;
}
