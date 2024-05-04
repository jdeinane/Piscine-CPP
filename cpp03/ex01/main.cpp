/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 19:47:49 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("CL4P-TP");

	std::cout << "ClapTrap " << claptrap.getName() << " has been created with "	
				<< claptrap.getHitPoints() << " hit points, "
				<< claptrap.getEnergyPoints() << " energy points, and "
				<< claptrap.getAttackDamage() << " attack damage." << std::endl;
	
	std::cout << "Attempting to attack a target..." << std::endl;
	claptrap.attack("Target Dummy");

	std::cout << "Taking Damage..." << std::endl;
	claptrap.takeDamage(5);

	std::cout << "Attempting to repair..." << std::endl;
	claptrap.beRepaired(5);

	std::cout << "Final state: " << std::endl;
	std::cout << "ClapTrap " << claptrap.getName() << " has "
				<< claptrap.getHitPoints() << " hit points and "
				<< claptrap.getEnergyPoints() << " energy points left." << std::endl;

	std::cout << "---------------------------------------------------------------------------" << std::endl;

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

	return 0;

}