/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:12:09 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/11 10:17:33 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*zoo[12];

	for (int i = 0; i < 12; i++)
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
		std::cout << "I am a " << zoo[i]->getType() << std::endl;
		zoo[i]->getBrain()->thinking();
		std::cout << std::endl;
	}

	for (int i = 0; i < 12; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}
	std::cout << "-----------------------------------------------------------\n";

	std::string	sentence;

	const Cat*	kitty = new Cat();
	sentence = "I am a cute " + kitty->getType();
	kitty->getBrain()->learning(sentence);

	std::cout << std::endl;
	const Cat* pussy = new Cat(*kitty);
	std::cout << std::endl;

	std::cout << "Kitty:\n";
	kitty->getBrain()->thinking();
	std::cout << "Pussy:\n";
	pussy->getBrain()->thinking();
	
	std::cout << std::endl;
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
	std::cout << std::endl;
	delete pussy;

	std::cout << std::endl;
	const Dog*	tailor = new Dog();
	sentence = "I am a brave " + tailor->getType();
	tailor->getBrain()->learning(sentence);

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
	std::cout << std::endl;
	delete barker;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------------------\n";
	std::cout << "\nA clever Dog\n";
	Dog*	rantanplan = new Dog;
	for (int i = 0; i < 120; i++)
	{
		std::ostringstream oss;
	 	oss << "Clever idea number " << i;
		rantanplan->getBrain()->learning(oss.str());
	}
	std::cout << std::endl;
	rantanplan->getBrain()->thinking();
	std::cout << std::endl;
	delete rantanplan;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------------------\n";
	std::cout << "\nAnd now an unidentified animal\n";
	const Animal*	hector = new Animal();
	hector->makeSound();
	hector->getBrain();
	delete hector;


}
