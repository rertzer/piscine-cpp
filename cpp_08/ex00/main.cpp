/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:24:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/27 13:51:59 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	//vector
	std:: cout << "looking for 24 in a 42 vector\n";
	std::vector<int>	myvector;
	myvector.assign(42, 42);
	myvector[24] = 24;

	std::vector<int>::iterator itv = easyfind(myvector, 24);
	if (itv != myvector.end())
		std::cout	<< "found value " << *itv << std::endl;
	else
		std::cout << "not found\n";

	std:: cout << "looking for unexisting 1  in a 42 vector\n";
	itv = easyfind(myvector, 1);
	if (itv != myvector.end())
		std::cout	<< "found value " << *itv << std::endl;
	else
		std::cout << "not found\n";

	// deque
	std:: cout << "\nlooking for 24 in a 42 deque\n";
	std::deque<int>	mydeque;
	mydeque.assign(42, 42);
	mydeque[24] = 24;

	std::deque<int>::iterator itd = easyfind(mydeque, 24);
	if (itd != mydeque.end())
		std::cout	<< "found value " << *itd << std::endl;
	else
		std::cout << "not found\n";

	// list
	std:: cout << "\nlooking for 24 in a 42 list\n";
	std::list<int>	mylist;
	mylist.assign(42, 42);
	mylist.front() = 24;

	std::list<int>::iterator itl = easyfind(mylist, 24);
	if (itl != mylist.end())
		std::cout	<< "found value " << *itl << std::endl;
	else
		std::cout << "not found\n";

	return 0;
}
