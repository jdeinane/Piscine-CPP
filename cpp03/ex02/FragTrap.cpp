/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:51:09 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 20:17:53 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("DefaultFrag") {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " has been constructed with default settings." << std::endl;
}

FragTrap::FragTrap(std::string const &name)
	: ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " has been constructed." << std::endl;
	}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " is being deconstructed." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap" << name << " requests a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if (energyPoints > 0 && hitPoints > 0) {
		std::cout << "FragTrap " << name << " attacks " << target
				<< ", causing " << attackDamage << " points of damage! It's effective!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "FragTrap " << name << " cannot attack due to lack of energy or hit points." << std::endl;
}