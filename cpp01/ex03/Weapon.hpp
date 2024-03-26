/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:12:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/26 14:35:11 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string	type;
	
public:
	Weapon();
	Weapon(const std::string& type);
	~Weapon();
	
	const std::string& getType() const;
	void setType(const std::string& type);
};

#endif