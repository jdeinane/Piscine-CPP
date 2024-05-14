/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:45:15 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/13 15:56:17 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " makes a sound: ";
	j->makeSound();

	std::cout << i->getType() << " makes a sound: ";
	i->makeSound();

	delete j;
	delete i;

	std::cout << "\nAdditional Tests:\n";
	Dog	dog1;
	Cat	cat1;

	Dog	dog2;
	Cat	cat2;

	std::cout << "dog2 makes a sound: ";
	dog2.makeSound();

	std::cout << "cat2 makes a sound: ";
	cat2.makeSound();

	std::cout << "\nDynamic allocation tests:\n";
	Animal*	animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	 for (int k = 0; k < 4; k++) {
		std::cout << "Animal" << k+1 << " of type " << animals[k]->getType() << " makes a sound: ";
		animals[k]->makeSound();
	 }
	 
	 for (int k = 0; k < 4; k++)
	 	delete animals[k];

	return 0;
}
