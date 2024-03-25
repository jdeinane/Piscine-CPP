/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:08:12 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/25 20:41:12 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name){
	_name = name;
}

Zombie*	zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];

	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}