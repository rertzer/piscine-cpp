/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:35:41 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/25 11:56:23 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(const Intern & it);
		~Intern();

		Intern &	operator=(const Intern & rhs);

		AForm *		makeForm(std::string const & name, std::string const & target) const;

	private:
		AForm *		makeShrubbery(std::string const & target) const;
		AForm *		makeRobotomy(std::string const & target) const;
		AForm *		makePardon(std::string const & target) const;
};

#endif
