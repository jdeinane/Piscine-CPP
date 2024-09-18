/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:05:44 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/18 11:11:25 by jubaldo          ###   ########.fr       */
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
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif