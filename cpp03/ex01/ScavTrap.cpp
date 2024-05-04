/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:27 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 19:48:49 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("DefaultScav") {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been constructed with default settings." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
	: ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been constructed." << std::endl;
	}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " has been destroyed." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap" << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (energyPoints > 0 && hitPoints > 0) {
		std::cout << "ScavTrap " << name << " attacks " << target
				<< ", causing " << attackDamage << " points of damage! It's super effective!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " cannot attack due to lack of energy or hit points." << std::endl;
}
