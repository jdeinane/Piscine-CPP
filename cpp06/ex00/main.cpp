/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:51:14 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/17 17:07:15 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " <literal>" << std::endl;
		return 1;
	}

	std::string literal = av[1];
	ScalarConverter::convert(literal);
	return 0;
}