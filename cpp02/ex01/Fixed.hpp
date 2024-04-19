/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:03:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/19 19:42:51 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(int const num);
	Fixed(float const num);

	Fixed& operator=(const Fixed& other);

	~Fixed();

	// Methodes d'acces
	int getRawBits(void) const;
	void setRawBits(int const raw);

	// Methodes de conversion
	float toFloat(void) const;
	int toInt(void) const;

	friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
};

#endif