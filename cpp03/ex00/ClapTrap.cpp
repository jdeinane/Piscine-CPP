/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/02 20:47:10 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : name(name) {
	std::cout << "ClapTrap " << this->name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Clap Trap " << this->name << " is destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this-> hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks" << target 
					<< ", causing" << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy or dead." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (amount >= this->hitPoints) {
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl;
	}
	else
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0) {
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " repairs itself, restoring "
					<< amount << " hit points!" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->name << " is out of energy or dead. It's too late for reparations." << std::endl;
}



