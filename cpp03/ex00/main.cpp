/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 19:37:46 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	
	return 0;
}