/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:13:54 by rertzer           #+#    #+#             */
/*   Updated: 2023/03/23 13:23:08 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	message = "HI THIS IS A BRAIN";
	std::string* stringPTR = &message;
	std::string& stringREF = message;

	std::cout << "string address: " << &message << std::endl;
	std::cout << "address in stringPTR: " << stringPTR << std::endl;
	std::cout << "address in stringREF: " << &stringREF << std::endl;

	std::cout << "value in message: " << message << std::endl;
	std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF: " << stringREF << std::endl;

	return 0;
}
