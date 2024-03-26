/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:08:12 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/26 10:47:42 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie* horde = new Zombie[N];

	if (N <= 0)
		return NULL;
	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}