/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:01:02 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/07 15:07:27 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Undefined") {
	std::cout << "An animal has been created." << std::endl;
}

Animal::Animal(const Animal& other) {
	type = other.type;
	std::cout << "An animal has been copied." << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) 
		type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "An animal has been destroyed." << std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Some generic animal sound." << std::endl;
}
