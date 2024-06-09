/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:28 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 19:51:00 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	int	nZombies;
	std::string	zombieName;
	std::string	input;

	std::cout << "Enter the number of zombies in the horde: ";
	std::getline(std::cin, input);

	std::istringstream iss(input);
	if (!(iss >> nZombies) || nZombies <= 0)
	{
		std::cerr << "Invalid input." << std::endl;
		return 1;
	}
	
	std::cout << "Enter a name for the zombies: ";
	std::getline(std::cin, zombieName);

	if (zombieName.empty())
	{
		std::cerr << "Invalid input. Please enter a non-empty name." << std::endl;
		return 1;
	}

	Zombie* horde = zombieHorde(nZombies, zombieName);
	if (!horde)
	{
		std::cerr << "Failed to create zombie horde." << std::endl;
		return 1;
	}
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
