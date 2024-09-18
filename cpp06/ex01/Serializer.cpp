/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:09:32 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/18 11:14:58 by jubaldo          ###   ########.fr       */
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

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);	// convertit le pointeur en entier
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*> (raw);		// convertit l'entier en pointeur
}
