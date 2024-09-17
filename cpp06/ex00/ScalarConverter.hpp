/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:16:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/17 16:36:14 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <cmath>

class ScalarConverter {
	private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter &operator=(ScalarConverter const &other);
	~ScalarConverter();
	
	public:
	static void convert(std::string const &literal);
};

#endif