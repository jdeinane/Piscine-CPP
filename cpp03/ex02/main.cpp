/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 20:28:28 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("ClapMaster");
	ScavTrap scavtrap("Scavenger");
	FragTrap fragtrap("Fragger");

	claptrap.attack("a random target");
	scavtrap.attack("a random target");
	fragtrap.attack("a random target");

	std::cout << std::endl << "Demonstrating special capabilities: " << std::endl;
	scavtrap.guardGate();
	fragtrap.highFivesGuys();

	std::cout << std::endl << "Dealing damage to all:" << std::endl;
	claptrap.takeDamage(10);
	scavtrap.takeDamage(20);
	fragtrap.takeDamage(30);

	std::cout << std::endl << "Repairing all:" << std::endl;
	claptrap.beRepaired(5);
	scavtrap.beRepaired(10);
	fragtrap.beRepaired(15);
	
    std::cout << std::endl << "Final states:" << std::endl;
    std::cout << claptrap.getName() << " has " << claptrap.getHitPoints() << " hit points left." << std::endl;
    std::cout << scavtrap.getName() << " has " << scavtrap.getHitPoints() << " hit points left." << std::endl;
    std::cout << fragtrap.getName() << " has " << fragtrap.getHitPoints() << " hit points left." << std::endl;

	// FragTrap ft("FT1");

	return 0;
}