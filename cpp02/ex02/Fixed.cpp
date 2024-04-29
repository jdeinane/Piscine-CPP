/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:48:22 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/29 18:39:10 by jubaldo          ###   ########.fr       */
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

float Fixed::toFloat() const {
    return static_cast<float>(this->value) / (1 << fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.value;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
	return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	if (other.value == 0)
	{
		std::cerr << "Division by zero" << std::endl;
		return Fixed();
	}
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
	++this->value;
	return *this;
}

Fixed& Fixed::operator--() {
	--this->value;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	operator++();
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	operator--();
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.value < b.value)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.value > b.value)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.value < b.value)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.value > b.value)
		return a;
	else
		return b;
}