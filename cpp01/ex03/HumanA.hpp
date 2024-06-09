/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:12:30 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 20:39:17 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
	std::string	name;
	Weapon&	weapon;
	
public:
	HumanA(const std::string& name, Weapon& weapon);
	void attack() const;
};

#endif

// HumanA utilise une référence à Weapon:
// car l'arme existe de la création à la 
// destruction et ne change jamais.