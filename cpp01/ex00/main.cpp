/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:28 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/25 17:45:05 by jubaldo          ###   ########.fr       */
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