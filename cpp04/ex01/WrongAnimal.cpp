/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:11:23 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/07 15:20:14 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Undefined Wrong Animal") {
	std::cout << "A wrong animal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	type = other.type;
	std::cout << "A wrong animal has been copied." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "A wrong animal has been destroyed." << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "This is a wrong sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}
