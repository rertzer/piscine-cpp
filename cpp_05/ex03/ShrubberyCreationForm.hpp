/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 10:28:09 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & fm);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(const ShrubberyCreationForm & rhs);

		const std::string &		getTarget() const;
		void					execute(Bureaucrat const & executor) const;

	private:
		const std::string	target;
};

std::ostream & operator<<(std::ostream & os, const ShrubberyCreationForm &fm);
#endif
