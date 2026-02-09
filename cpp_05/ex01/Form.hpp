/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/18 16:53:20 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form();
		Form(const std::string nm, const int sngd, const int exgd);
		Form(const Form & fm);
		~Form();

		Form &	operator=(const Form & rhs);

		const std::string &	getName() const;
		int					getSignegrade() const;
		int					getExecgrade() const;
		bool				getIssigned() const;
		void				beSigned(const Bureaucrat &bc);

	private:
		const std::string	name;
		int					signe_grade;
		int					exec_grade;
		bool				is_signed;

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form::exception: Grade is to high");
				}
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("Form::exception: Grade is to low"); 
				}
		};
};

std::ostream & operator<<(std::ostream & os, const Form &fm);
#endif
