/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:28 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/12 10:33:27 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	std::string zombieName;

	while (true) {
		std::cout << "Enter the heap-Zombie's name: ";
		std::getline(std::cin, zombieName);
		if (zombieName.empty())
			std::cerr << "Please enter a name for the Zombie." << std::endl;
		else
			break;
	}
	Zombie*	heapZombie = newZombie(zombieName);
	heapZombie->announce();
	delete heapZombie;

	while (true) {
		std::cout << "Enter the stack-Zombie's name: ";
		std::getline(std::cin, zombieName);
		if (zombieName.empty())
			std::cerr << "Please enter a name for the Zombie." << std::endl;
		else
			break;
	}
	randomChump(zombieName);
	
	return 0;
}

// - Pile (stack): Allocation rapide, mémoire limitée, gestion automatique, 
// 			durée de vie liée à la portée des fonctions.
// - Tas (heap): Allocation plus lente, mémoire plus grande, gestion manuelle, 
// 			durée de vie indépendante de la portée des fonctions.