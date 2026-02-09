/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:29:46 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/20 12:11:07 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main()
{
	AForm	*vif = 0;

	try
	{
		Bureaucrat	gerald = Bureaucrat("Gerald", 5);

		//Form	a = Form();
		//std::cout << a << "\n\n";

		vif = new ShrubberyCreationForm("Norminet's garden");

		std::cout << *vif << "\n\n";
		gerald.executeForm(*vif);
		gerald.signForm(*vif);
		std::cout << *vif << "\n\n";
		gerald.executeForm(*vif);

		std::cout << "\n\n";

		delete vif;
		vif = new RobotomyRequestForm("Marvin");
		gerald.signForm(*vif);
		std::cout << *vif << "\n\n";

		for (int i = 0; i < 13; i++)
			gerald.executeForm(*vif);

		std::cout << "\n\n";

		delete vif;
		vif = new PresidentialPardonForm("Marvin");
		gerald.signForm(*vif);
		std::cout << *vif << "\n\n";
		gerald.executeForm(*vif);
	
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete vif;
}
