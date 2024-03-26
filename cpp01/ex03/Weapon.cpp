/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:12:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/26 14:49:10 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {}

Weapon::Weapon(const std::string& type) : type(type) {}

Weapon::~Weapon() {}

const	std::string& Weapon::getType() const {
	return type;
}

void	Weapon::setType(const std::string& type){
	this->type = type;
}