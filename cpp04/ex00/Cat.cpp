/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:07:46 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/07 15:09:08 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "A cat has been created." << std::endl;
}

Cat::~Cat() {
	std::cout << "A cat has been destroyed." << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}