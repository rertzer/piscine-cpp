/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:05:32 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 15:20:43 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main(void)
{
	Point	A(0.0f, 0.0f);
	Point	B(0.0f, 4.0f);
	Point	C(-3.0f, 0.0f);
	Point	D(1.0f, 1.0f);
	Point	E(5.0f, 2.0f);
	Point	F(4.0f, 6.0f);
	Point	G(1.0f, -1.0f);
	Point	H(7.0f, -1.0f);
	Point	I(12.0f, -4.0f);
	Point	J(-1.0f, 1.0f);
	Point	K(3.0f, 3.0f);
	Point	L(4.0f, -1.0f);
	Point	M(7.0f, -2.0f);

	if (bsp(A, B, C, J))
		std::cout << "J is inside ABC" << std::endl;
	else
		std::cout << "J is outside ABC" << std::endl;
	
	if (bsp(A, B, C, A))
		std::cout << "A is inside ABC" << std::endl;
	else
		std::cout << "A is outside ABC" << std::endl;
	
	if (bsp(A, B, C, K))
		std::cout << "K is inside ABC" << std::endl;
	else
		std::cout << "K is outside ABC" << std::endl;

	if (bsp(A, B, C, G))
		std::cout << "G is inside ABC" << std::endl;
	else
		std::cout << "G is outside ABC" << std::endl;

	if (bsp(D, E, F, K))
		std::cout << "K is inside DEF" << std::endl;
	else
		std::cout << "K is outside DEF" << std::endl;

	if (bsp(D, E, F, A))
		std::cout << "A is inside DEF" << std::endl;
	else
		std::cout << "A is outside DEF" << std::endl;

	if (bsp(D, E, F, F))
		std::cout << "F is inside DEF" << std::endl;
	else
		std::cout << "F is outside DEF" << std::endl;
	
	if (bsp(D, E, F, L))
		std::cout << "L is inside DEF" << std::endl;
	else
		std::cout << "L is outside DEF" << std::endl;

	if (bsp(G, H, I, M))
		std::cout << "M is inside GHI" << std::endl;
	else
		std::cout << "M is outside GHI" << std::endl;

	if (bsp(G, H, I, L))
		std::cout << "L is inside GHI" << std::endl;
	else
		std::cout << "L is outside GHI" << std::endl;

	if (bsp(G, H, I, B))
		std::cout << "B is inside GHI" << std::endl;
	else
		std::cout << "B is outside GHI" << std::endl;

	if (bsp(G, H, I, J))
		std::cout << "J is inside GHI" << std::endl;
	else
		std::cout << "J is outside GHI" << std::endl;

	if (bsp(B, C, I, J))
		std::cout << "J is inside BCI" << std::endl;
	else
		std::cout << "J is outside BCI" << std::endl;

	if (bsp(B, C, I, L))
		std::cout << "L is inside BCI" << std::endl;
	else
		std::cout << "L is outside BCI" << std::endl;

	if (bsp(B, C, I, G))
		std::cout << "G is inside BCI" << std::endl;
	else
		std::cout << "G is outside BCI" << std::endl;

	if (bsp(B, C, I, K))
		std::cout << "K is inside BCI" << std::endl;
	else
		std::cout << "K is outside BCI" << std::endl;

	return 0;
}
