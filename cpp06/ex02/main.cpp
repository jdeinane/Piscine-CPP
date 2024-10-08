/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:58:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/19 18:38:12 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " <nb_of_objects_to_generate>" << std::endl;
		return 1;
	}

	std::srand(static_cast<unsigned int>(std::time(0)));

	int numObjects = std::atoi(av[1]);
	if (numObjects <= 0) {
		std::cerr << "Provide a positive integer for the number of objects to generate." << std::endl;
		return 1;
	}

	for (int i = 0; i < numObjects; ++i) {
		Base* basePtr = generate();
		
		identify(basePtr);
		identify(*basePtr);

		delete basePtr;

		std::cout << "--------------------------------------" << std::endl;

		// std::cout << "Testing with nullptr directly:" << std::endl;
		// identify(NULL); // Appel direct avec nullptr

		// std::cout << "--------------------------------------" << std::endl;
		
	}
	return 0;
}