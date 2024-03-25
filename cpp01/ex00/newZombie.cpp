/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:56 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/25 18:05:15 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie* newZomb = new Zombie(name);
	return newZomb;
}

// On est responsable de la mémoire et on doit assurer de "libérer" le zombie 
// avec delete quand on en a plus besoin.