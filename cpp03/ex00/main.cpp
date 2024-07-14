/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/29 18:33:37 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "------------------------------------------" << std::endl;
	ClapTrap claptrap("ClapTrap");
	std::cout << "------------------------------------------" << std::endl;

	claptrap.attack("ClapCrack");
	claptrap.takeDamage(8);
	claptrap.beRepaired(5);

	std::cout << "------------------------------------------" << std::endl;
	ClapTrap clapcrack("ClapCrack");
	std::cout << "------------------------------------------" << std::endl;

	clapcrack.attack("ClapTrap");
	clapcrack.takeDamage(3);
	clapcrack.beRepaired(3);

	std::cout << "------------------------------------------" << std::endl;

	// // Demonstration de la copie et de l'affectation
	
	// ClapTrap clonedClapTrap(claptrap);
	// ClapTrap assignedClapTrap;
	// assignedClapTrap = claptrap;

	// clonedClapTrap.attack("Bandit");
	// assignedClapTrap.beRepaired(10);

	// std::cout << "------------------------------------------" << std::endl;

	return 0;
}