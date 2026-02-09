/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:12:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/11 10:23:36 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*zoo[42];

	for (int i = 0; i < 42; i++)
	{
		if (i % 2 == 0)
		{
			zoo[i] = new Cat();
			zoo[i]->getBrain()->learning("Mices taste good.");
			zoo[i]->getBrain()->learning("Dogs are stupid.");
		}
		else
		{
			zoo[i] = new Dog();
			zoo[i]->getBrain()->learning("Bones taste good.");
			zoo[i]->getBrain()->learning("Cats are morons.");
		}
		zoo[i]->getBrain()->thinking();
		std::cout << std::endl;
	}

	for (int i = 0; i < 42; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}

	const Cat*	kitty = new Cat();
	kitty->getBrain()->learning("I am a cute cat!");

	std::cout << std::endl;
	const Cat* pussy = new Cat(*kitty);
	std::cout << std::endl;

	std::cout << "Kitty:\n";
	kitty->getBrain()->thinking();
	std::cout << "Pussy:\n";
	pussy->getBrain()->thinking();
	
	kitty->getBrain()->learning("Pussy is my best friend.");
	pussy->getBrain()->learning("Kitty is annoying.");
	kitty->getBrain()->learning("I want to play with Pussy.");
	pussy->getBrain()->learning("Please make that Kitty don't ask me to play with her!");

	std::cout << "Kitty again:\n";
	kitty->getBrain()->thinking();
	std::cout << "Pussy again:\n";
	pussy->getBrain()->thinking();

	std::cout << std::endl;
	delete kitty;
	delete pussy;



	const Dog*	tailor = new Dog();
	tailor->getBrain()->learning("I am a brave dog!");

	std::cout << std::endl;
	const Dog* barker = new Dog(*tailor);
	std::cout << std::endl;

	std::cout << "Tailor:\n";
	tailor->getBrain()->thinking();
	std::cout << "Barker:\n";
	barker->getBrain()->thinking();
	
	tailor->getBrain()->learning("Barker is my best friend.");
	barker->getBrain()->learning("Tailor is annoying.");
	tailor->getBrain()->learning("I want to play with Barker.");
	barker->getBrain()->learning("Please make that Tailor don't ask me to play with him!");

	std::cout << "Tailor again:\n";
	tailor->getBrain()->thinking();
	std::cout << "Barker again:\n";
	barker->getBrain()->thinking();

	std::cout << std::endl;
	delete tailor;
	delete barker;
	
/*
	std::cout << "\nAnd now an unidentified animal\n";
	const Animal*	hector = new Animal();
	hector->makeSound();
	hector->getBrain();
	delete hector;
*/
}
