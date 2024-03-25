/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:56:41 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/25 17:52:51 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();
	void	announce() const;
};

Zombie*	newZombie(std::string name);	// Fonction globale pour creer un nouveau zombie sur le tas (heap zombie)
void	randomChump(std::string name);	// Fonction globale pour creer un zombie sur la pile (stack zombie)

#endif

// 		Allocation sur la pile (Stack Allocation): 
// - La pile est utilisée pour l'allocation de mémoire statique et locale, qui n'est pas destinée à être partagée
// en dehors de sa fonction ou bloc de code.
//
// - Utiliser la pile est rapide car il s'agit simplement d'incrémenter ou de décrémenter un pointeur.
//
// - Par exemple, dans le cas de void randomChump(std::string name); où un Zombie est créé et utilisé immédiatement 
// sans nécessité de le conserver après la fin de la fonction, l'allocation sur la pile est judicieuse.

//		Allocation sur le tas (Heap Allocation):
// - Le tas est utilisé pour l'allocation de mémoire dynamique, où la taille ou la durée de vie des données ne peut
// pas être déterminée au moment de la compilation.
//
// - La mémoire allouée sur le tas reste allouée jusqu'à ce qu'elle soit explicitement libérée ou que le programme se termine. 
// On a donc le contrôle total sur la durée de vie de cette mémoire, mais il faut la libérer correctement pour éviter les fuites de mémoire.
//
// - L'allocation sur le tas est plus lente que sur la pile en raison de la gestion de la mémoire dynamique et de la fragmentation potentielle du tas.
//
// - Dans le cas de Zombie* newZombie(std::string name);, où un Zombie doit être utilisé en dehors de la fonction qui l'a créé,
// il est nécessaire d'allouer la mémoire sur le tas pour conserver le Zombie après la fin de la fonction.
