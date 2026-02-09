/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:29:46 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/13 16:14:15 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << "Gerald the bureaucrat:\n";
		Bureaucrat	gerald = Bureaucrat("Gerald", 6);

		std::cout << gerald << std::endl;

		std::cout << "\nDefault form:\n";
		Form	a = Form();
		std::cout << a << "\n\n";

		std::cout << "Form b\n";
		Form	b = Form("B41", 6, 42);
		std::cout << b << "\n\n";

		std::cout << "Form c, copy of b\n";
		Form	c = Form();
		c = b;
		std::cout << c << "\n\n";

		std::cout << "Gerald sign form b\n";
		gerald.signForm(b);
		std::cout << b << "\n\n";
		
		std::cout << "Gerald is downgraded\n";
		gerald.downgrade();

		std::cout << "Gerald sign form c\n";
		gerald.signForm(c);
		std::cout << c << "\n\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
