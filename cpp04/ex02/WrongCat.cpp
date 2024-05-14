/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:14:44 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/07 15:17:41 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "A wrong cat has been created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "A wrong cat has been copied." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "A wrong cat has been destroyed." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow!" << std::endl;
}