/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:08:46 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/17 15:56:05 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string	replaceAll(const std::string& source, const std::string& s1, const std::string& s2)
{
	std::string result;
	std::size_t pos = 0;
	std::size_t prevPos = 0;

	while ((pos = source.find(s1, pos)) != std::string::npos) {
		result += source.substr(prevPos, pos - prevPos) + s2;
		pos += s1.length();
		prevPos = pos;
	}
	result += source.substr(prevPos);
	return result;
}

int	main(int ac, char **av)
{
	if (ac != 4) {
		std::cerr << "Wrong arguments or inexistant file." << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "Could not open file " << filename << std::endl;
		return 1;
	}
	
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Could not create file " << outputFilename << std::endl;
		inputFile.close();
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line)) {
		outputFile << replaceAll(line, s1, s2) << std::endl;
		}
	inputFile.close();
	outputFile.close();
	
	return 0;
}