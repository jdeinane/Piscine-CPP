/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/02 21:32:04 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << this->name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Clap Trap " << this->name << " is destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this-> hitPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target 
					<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
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

std::string ClapTrap::getName() const {
	return name;
}

unsigned int ClapTrap::getHitPoints() const {
	return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return attackDamage;
}

void ClapTrap::setName(std::string const &newName) {
	name = newName;
}

void ClapTrap::setHitPoints(unsigned int newHitPoints) {
	hitPoints = newHitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int newEnergyPoints) {
	energyPoints = newEnergyPoints;
}

void ClapTrap::setAttackDamage(unsigned int newAttackDamage) {
	attackDamage = newAttackDamage;
}
