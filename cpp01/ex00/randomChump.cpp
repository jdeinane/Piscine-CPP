/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:57:04 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 19:24:19 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie	tempZombie(name);
	tempZombie.announce();
}

// Lorsqu'on cree un objet directement dans une fonction , il est créé sur la pile, 
// et la mémoire est gérée automatiquement.
// Le zombie "vit" seulement le temps de la fonction.