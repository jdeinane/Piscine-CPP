/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:51:09 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 19:54:52 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
