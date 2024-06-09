/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:28 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 19:25:46 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	std::string zombieName;

	std::cout << "Enter the heap-Zombie's name: ";
	std::getline(std::cin, zombieName);
	Zombie*	heapZombie = newZombie(zombieName);
	heapZombie->announce();
	delete heapZombie;

	std::cout << "Enter the stack-Zombie's name: ";
	std::getline(std::cin, zombieName);
	randomChump(zombieName);
	
	return 0;
}

// - Pile (stack): Allocation rapide, mémoire limitée, gestion automatique, 
// 			durée de vie liée à la portée des fonctions.
// - Tas (heap): Allocation plus lente, mémoire plus grande, gestion manuelle, 
// 			durée de vie indépendante de la portée des fonctions.