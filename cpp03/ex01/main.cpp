/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/26 16:25:42 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("Clappy");

	std::cout << std::endl;

	claptrap.attack("EnemyBot");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	
	std::cout << std::endl;

	ScavTrap scavtrap("Scavvy");

	std::cout << std::endl;

	scavtrap.attack("RivalBot");
	scavtrap.takeDamage(15);
	scavtrap.beRepaired(10);
	scavtrap.guardGate();

	std::cout << std::endl;

	return 0;
}