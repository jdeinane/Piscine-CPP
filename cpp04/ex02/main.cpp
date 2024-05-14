/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:45:15 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/14 16:36:28 by jubaldo          ###   ########.fr       */
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
//    Animal testAnimal;

    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << "Dog: ";
    dog->makeSound();

    std::cout << "Cat: ";
    cat->makeSound();

    delete dog;
    delete cat;

    return 0;
}
