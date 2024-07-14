/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:51:09 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/29 17:40:41 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFrag") {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap constructor for " << name << " has been called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for " << name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other) 
		ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator called for " << name << std::endl;
	return *this;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}
