/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:58:21 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/13 13:42:37 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <exception>
#include <map>
#include <iomanip>
#include <fstream>

class BitcoinExchange {
	private:
	std::map<std::string, double> _map;

	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange &operator=(BitcoinExchange const &other);
	
	public:
	BitcoinExchange();
	~BitcoinExchange();

	void loadRates(const std::string &fileName);
	double calculateValue(const std::string &date, double value) const;
	bool isValidDate(const std::string &date) const;
	void processInput(const std::string &fileName) const;
};

#endif