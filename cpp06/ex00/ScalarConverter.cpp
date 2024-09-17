/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:33:56 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/17 17:15:21 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string const &literal) {
	double	value;
	char	*end;

	// check if pseudo-literal
	if (literal == "nan" || literal == "nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
	if (literal == "+inf" || literal == "+inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return;
	}
	if (literal == "-inf" || literal == "-inff") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return;
	}

	// convert to double to facilitate other conversions
	value = std::strtod(literal.c_str(), &end);
	if (*end != '\0' && *end != 'f') {
		std::cout << "Conversion failed: invalid input." << std::endl;
		return;
	}

	// convert to char
	if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max() && !std::isnan(value)) {
		char c = static_cast<char>(value);
		if (std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	
	// convert to int
	if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max()) {
		int i = static_cast<int>(value);
		std::cout << "int: " << i << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
	
	// convert to float
	if (!std::isinf(value) && value >= -std::numeric_limits<float>::max() && value <= std::numeric_limits<float>::max()) {
		float f = static_cast<float>(value);
		std::cout << "float: " << f;
		if (f == static_cast<int>(f))
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
	
	// convert to double
	std::cout << "double: " << value;
	if (value == static_cast<int>(value))
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}
