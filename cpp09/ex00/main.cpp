/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:58:09 by jubaldo           #+#    #+#             */
/*   Updated: 2024/12/21 19:01:56 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " <input_file>" << std::endl;
		return 1;
	}
	
	try {
		BitcoinExchange btcExchange;

		btcExchange.loadRates("data.csv");
		btcExchange.processInput("input.txt");
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}