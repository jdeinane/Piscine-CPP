/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:45:15 by jubaldo           #+#    #+#             */
/*   Updated: 2024/07/12 17:59:46 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Brain.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main()
{
	// std::cout << std::endl;
	// std::cout << "-----------------------------------------------------" << std::endl;
	// std::cout << std::endl;

	// std::cout << "Basic tests:" << std::endl;
	// std::cout << std::endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " makes a sound: ";
	// j->makeSound();

	// std::cout << i->getType() << " makes a sound: ";
	// i->makeSound();

	// delete j;
	// delete i;

	std::cout << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Deep copy and assignments tests:" << std::endl;
	std::cout << std::endl;
	
	Dog basic;
	{
		Dog tmp = basic;
	}
	
	std::cout << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Array tests:" << std::endl;
	std::cout << std::endl;
	
	Animal *animals[4];

	std::cout << std::endl;

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	std::cout << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << animals[i]->getType() << " makes a sound: ";
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
