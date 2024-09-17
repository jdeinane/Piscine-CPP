/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:05:44 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/17 18:11:31 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <cstdint>

class Serializer {
	private:
	Serializer();
	Serializer(Serializer const &Serializer);
	Serializer &operator=(Serializer const &Serializer);
	~Serializer();

	public:
	uintptr_t serailize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif