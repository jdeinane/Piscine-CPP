/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:28 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/26 10:50:10 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int	nZombies;
	std::string	zombieName;

	std::cout << "Enter the number of zombies in the horde: ";
	std::cin >> nZombies;
	
	if (std::cin.fail() || nZombies <= 0) {
		std::cerr << "Invalid input. Please enter a positive number." << std::endl;
		return 1;
	}
	std::cout << "Enter a name for the zombies: ";
	std::cin >> zombieName;

	Zombie* horde = zombieHorde(nZombies, zombieName);
	for (int i = 0; i < nZombies; i++)
		horde[i].announce();
		
	delete[] horde;

	return 0;
}

// int	main() {
// 	int const N = 6;
// 	Zombie	*horde = zombieHorde(N, "Zombie");
	
// 	for (int i = 0; i < N; i++)
// 		horde[i].announce();
	
// 	delete[] horde;
// 	return 0;
// }
