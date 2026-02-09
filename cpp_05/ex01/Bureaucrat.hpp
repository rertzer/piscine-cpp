/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/18 16:44:27 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string nm, const int gd);
		Bureaucrat(const Bureaucrat & bc);
		~Bureaucrat();

		Bureaucrat &	operator=(const Bureaucrat & rhs);

		const std::string &	getName() const;
		int					getGrade() const;
		void				upgrade();
		void				downgrade();
		void				signForm(Form & fm) const;

	private:
		const std::string	name;
		int					grade;

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception: Grade is to high");
				}
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("Bureaucrat::exception: Grade is to low"); 
				}
		};
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat &bc);
#endif
