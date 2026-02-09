/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:34:18 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 12:04:28 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): \
		AForm("Robotomy Request Form", 72, 45), target("Nobody")
{
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string tg): \
		AForm("Robotomy Request Form", 72, 45), target(tg)
{
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & fm): \
		AForm(fm), target(fm.target)
{
	std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called\n";
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	std::cout << "RobotomyRequestForm assignment operator called\n";
	(void)rhs;
	return *this;
}

const std::string &	RobotomyRequestForm::getTarget() const
{
	return target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bc) const
{
	executeCheck(bc);
	int	random = std::rand();
	std::cout << "Wrrzz  WrrzzzzzzziiiIIIIiiizzzzz\n";
	if (random % 2)
		std::cout << target << " has been properly robotomized\n";  
	else
		std::cout << "I'am affraid that " << target << " robotomy failed\n";
}

std::ostream &operator<<(std::ostream &ost, const RobotomyRequestForm &fm)
{
	ost << fm.getName() << " form:  signe grade " << fm.getSignegrade();
	ost << ", execute grade " << fm.getExecgrade() << ", target: " << fm.getTarget();
	if (fm.getIssigned())
		ost << " is signed";
	else
		ost << " is not signed";
	return ost;
}
