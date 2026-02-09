/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 11:25:09 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & fm);
		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(const RobotomyRequestForm & rhs);

		const std::string &		getTarget() const;
		void					execute(Bureaucrat const & executor) const;

	private:
		const std::string	target;
};

std::ostream & operator<<(std::ostream & os, const RobotomyRequestForm &fm);
#endif
