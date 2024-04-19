/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:15:41 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/19 19:44:36 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_num) : value(int_num << fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_num) : value(roundf(float_num * (1 << fractional_bits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : value(other.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->value = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << fractional_bits);
}

int Fixed::toInt(void) const {
	return this->value >> fractional_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}