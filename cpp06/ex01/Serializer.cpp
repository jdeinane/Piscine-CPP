/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:09:32 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/18 11:10:49 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &other) {
	*this = other;
}

Serializer &Serializer::operator=(Serializer const &other) {
	(void)other;
	return *this;
}

Serializer::~Serializer() {}

