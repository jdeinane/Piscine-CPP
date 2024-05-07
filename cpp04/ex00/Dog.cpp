/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:09:18 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/07 15:09:43 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "A Dog has been created." << std::endl;
}

Dog::~Dog() {
	std::cout << "A Dog has been destroyed." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Waf!" << std::endl;
}
