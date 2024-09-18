/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:16:00 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/18 11:24:13 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int ac, char **av) {
	if (ac != 3) {
		std::cerr << "Usage: " << av[0] << " <id> <name>" << std::endl;
		return 1;
	}

	Data data;
	data.id = std::atoi(av[1]);
	data.name = av[2];
	
	// Display original data
	
	std::cout << "Original Data: " << std::endl;
	std::cout << "ID: " << data.id << ", Name: " << data.name << std::endl;

	// Serialize the data object

	uintptr_t serializedData = Serializer::serialize(&data);
	std::cout << "Serialized address (uintptr_t): " << serializedData << std::endl;

	// Deserialize the serialized address
	
	Data* deserializedData = Serializer::deserialize(serializedData);
	std::cout << "Data after deserialization: " << std::endl;
	std::cout << "ID: " << deserializedData->id << ", Name: " << deserializedData->name << std::endl;
	
	// Check if successful
	
	if (deserializedData == &data)
		std::cout << "Test successful: Deserialized pointer is identical to the original." << std::endl;
	else
		std::cout << "Test failed: Deserialized pointer is different from the original." << std::endl;


	return 0;
}