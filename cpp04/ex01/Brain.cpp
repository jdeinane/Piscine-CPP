/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:44:33 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/14 15:33:29 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructed." << std::endl;
	std::ostringstream ss; // Utiliser un flux de sortie de chaine pour la conversation
	for (int i = 0; i < 100; i++) {
		ss.str(""); // Nettoie le contenu du flux
		ss.clear(); // Reainitialise les flags d'etat du flux
		ss << "Idea " << i;
		ideas[i] = ss.str(); // Convertit le flux en std::string et assigne
	}
}

Brain::~Brain() {
	std::cout << "Brain destructed." << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructed." << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i ++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}
