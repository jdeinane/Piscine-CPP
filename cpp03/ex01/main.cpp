/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 20:29:41 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("Guardian");
	
	std::cout << scavtrap.getName() << " has "
				<< scavtrap.getHitPoints() << " hits points, "
				<< scavtrap.getEnergyPoints() << " energy points, and "
				<< scavtrap.getAttackDamage() << " attack damage." << std::endl;
	
	std::cout << "ScavTrap is attacking a target!" << std::endl;
	scavtrap.attack("Enemy");
	
	std::cout << "ScavTrap is entering gatekeeper mode..." << std::endl;
	scavtrap.guardGate();

	std::cout << "ScavTrap is taking damage..." << std::endl;
	scavtrap.takeDamage(20);
	
	std::cout << "ScavTrap is repairing itself..." << std::endl;
	scavtrap.beRepaired(15);

	std::cout << "Final state: " << std::endl;
	std::cout << "ScavTrap " << scavtrap.getName() << " has "
				<< scavtrap.getHitPoints() << " hit points and "
				<< scavtrap.getEnergyPoints() << " energy points left." << std::endl;

	// ScavTrap st("ST1");

	return 0;
}