/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 11:44:48 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & fm);
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(const PresidentialPardonForm & rhs);

		const std::string &		getTarget() const;
		void					execute(Bureaucrat const & executor) const;

	private:
		const std::string	target;
};

std::ostream & operator<<(std::ostream & os, const PresidentialPardonForm &fm);
#endif
