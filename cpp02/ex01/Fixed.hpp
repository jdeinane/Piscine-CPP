/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:15:31 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/19 15:17:18 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FIXED_HPP
#ifndef FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif