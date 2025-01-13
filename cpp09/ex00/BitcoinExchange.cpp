/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:58:31 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/13 11:34:10 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) {
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other) {
	(void)other;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadRates(const std::string &fileName) {
	std::ifstream file(fileName.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: Cannot open file " + fileName);

	std::string line;
	bool isFirstLine = true;

	while (std::getline(file, line)) {
		if (isFirstLine) {
			isFirstLine = false;
			continue;
		}

		std::istringstream ss(line);
		std::string date;
		std::string rateStr;

		if (std::getline(ss, date, ',') && std::getline(ss, rateStr)) {
			try {
				char *end;
				double rate = std::strtod(rateStr.c_str(), &end);
				_rate[date] = rate;
			} catch (const std::invalid_argument &e) {
				std::cerr << "Error: Line ignored because of invalid rate format : " << line << std::endl;
			}
		}
		else
			std::cerr << "Error: Line ignored because of bad format input : " << line << std::endl;
	}
	file.close();
}

double BitcoinExchange::calculateValue(const std::string &date, double value) const {
	if (_rate.empty())
		throw std::runtime_error("Error: The rate database is empty.");
	
	std::map<std::string, double>::const_iterator it = _rate.lower_bound(date);
	if (it == _rate.end() || it->first != date) {
		if (it == _rate.begin())
			throw std::runtime_error("Error: No available date.");
		it--;
	}
	double rate = it->second;
	return value * rate;
}

bool BitcoinExchange::isValidDate(const std::string &date) const {
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	
	for (size_t i = 0; i < date.length(); i++) {
		if ((i != 4 && i != 7) && !std::isdigit(date[i]))
			return false;
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	
	// fevrier genre annee bissextile
	if (month == 2) {
		bool isLeapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if (day > (isLeapYear ? 29 : 28))
			return false;
	}
	// mois a 30 jours
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30)
			return false;
	}
	return true;
}

void BitcoinExchange::processInput(const std::string &fileName) const {
	std::ifstream file(fileName.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: Cannot open file " + fileName);

	if (fileName.length() < 4 || (fileName.substr(fileName.length() - 4 ) != ".txt"))
		throw std::runtime_error("Error: Wrong file type. Please load '.txt' file");
	
	std::string line;
	bool isFirstLine = true;

	while (std::getline(file, line)) {
		if (isFirstLine) {
			isFirstLine = false;
			continue;
		}

		std::istringstream ss(line);
		std::string date;
		std::string valueStr;

		if (std::getline(ss, date, '|') && std::getline(ss, valueStr)) {
			// nettoyer les espaces
			date.erase(date.find_last_not_of(" \t") + 1);
			date.erase(0, date.find_first_not_of(" \t"));
			valueStr.erase(valueStr.find_last_not_of(" \t") + 1);
			valueStr.erase(0, valueStr.find_first_not_of(" \t"));
			
			if (!isValidDate(date)) {
				std::cerr << "Error: bad date format => " << date << std::endl;
				continue;
			}
			try {
				char *end;
				double value = std::strtod(valueStr.c_str(), &end);
				
				// verifier si la conversion a echoue ou si d'autres chars sont encore presents
				if (*end != '\0') {
					std::cerr << "Error: bad input => " << line << std::endl;
					continue;
				}
				
				if (value < 0) {
					std::cerr << "Error: not a positive number." << std::endl;
					continue;
				}
				if (value > 1e6) {
					std::cerr << "Error: too large a number." << std::endl;
					continue;
				}
				double result = calculateValue(date, value);
				std::cout << date << " => " << std::setprecision(2) << std::noshowpoint << value
						  << " = " << std::setprecision(2) << result << std::endl;
			} catch (const std::invalid_argument &) {
				std::cerr << "Error: bad input => " << line << std::endl;
			} catch (const std::out_of_range &) {
				std::cerr << "Error: too large a number." << std::endl;
			} catch (const std::runtime_error &e) {
				std::cerr << e.what() << std::endl;
			}
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
	file.close();
}