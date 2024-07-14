/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:45:15 by jubaldo           #+#    #+#             */
/*   Updated: 2024/07/12 18:22:57 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"
#include "includes/AAnimal.hpp"

int main()
{
	AAnimal test;

    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << "Dog: ";
    dog->makeSound();

    std::cout << "Cat: ";
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}
