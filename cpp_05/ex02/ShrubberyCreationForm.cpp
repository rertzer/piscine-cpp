/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:34:18 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 10:37:53 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): \
		AForm("Shrubbery Creation Form", 145, 137), target("Nobody")
{
	std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string tg): \
		AForm("Shrubbery Creation Form", 145, 137), target(tg)
{
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & fm): \
		AForm(fm), target(fm.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called\n";
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << "ShrubberyCreationForm assignment operator called\n";
	(void)rhs;
	return *this;
}

const std::string &	ShrubberyCreationForm::getTarget() const
{
	return target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bc) const
{
	executeCheck(bc);
	std::string	file_name = target + "_shrubbery";

		std::ofstream fs (file_name.c_str(), std::ios::out | std::ios::trunc);
		fs.exceptions(fs.failbit);

		fs << "                ,@@@@@@@,\n ";
		fs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n ";
		fs << "    ,&\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n ";
		fs << "   ,%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n ";
		fs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n ";
		fs << "   %&&%/ %&\%%&&@@\\ V /@@' `88\\8 `/88'\n ";
		fs << "   `&%\\ ` /%&'    |.|        \\ '|8'\n ";
		fs << "       |o|        | |         | |\n ";
		fs << "       |.|        | |         | |\n ";
		fs << "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/\n ";
	fs.close();
}

std::ostream &operator<<(std::ostream &ost, const ShrubberyCreationForm &fm)
{
	ost << fm.getName() << " form:  signe grade " << fm.getSignegrade();
	ost << ", execute grade " << fm.getExecgrade() << ", target: " << fm.getTarget();
	if (fm.getIssigned())
		ost << " is signed";
	else
		ost << " is not signed";
	return ost;
}
