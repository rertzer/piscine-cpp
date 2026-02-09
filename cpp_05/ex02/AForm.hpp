/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 10:00:53 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	public:
		AForm();
		AForm(const std::string nm, const int sngd, const int exgd);
		AForm(const AForm & fm);
		virtual ~AForm();

		AForm &	operator=(const AForm & rhs);

		const std::string &	getName() const;
		int					getSignegrade() const;
		int					getExecgrade() const;
		bool				getIssigned() const;
		void				beSigned(const Bureaucrat &bc);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				executeCheck(Bureaucrat const & executor) const;

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
					return ("AForm::exception: Grade is to high");
				}
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return("AForm::exception: Grade is to low"); 
				}
		};
		
		class	NotSignedException: public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return("AForm: exception: Form is not signed\n");
				}
		};
};

std::ostream & operator<<(std::ostream & os, const AForm &fm);
#endif
