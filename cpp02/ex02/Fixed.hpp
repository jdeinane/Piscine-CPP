/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:03:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/29 16:03:06 by jubaldo          ###   ########.fr       */
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
	Fixed(const int const int_num);
	Fixed(const float const float_num);

	~Fixed();

	// Operateur d'assignation
	Fixed& operator=(const Fixed& other);

	// Operateurs de comparaison
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	// Operateurs arithmetiques
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	// Operateurs d'incrementation et decrementation
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	// Methodes statiques pour min et max
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed&b);
	static const Fixed& max(const Fixed& a, const Fixed&b);

	// Methodes pour convettir en d'autres types
	float toFloat() const;
	int toInt() const;

	friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
};

#endif